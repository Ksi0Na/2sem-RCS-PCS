#include "header.h"
#include <cmath>

double distance(DecartCS dot_1, DecartCS dot_2)
{
	return 
			sqrt(
			 pow((dot_2.x() - dot_1.x()), 2) +
			 pow((dot_2.y() - dot_1.y()), 2)
				);
}

double distance(PolarCS dot_1, PolarCS dot_2)
{
	return 
			sqrt(
			 pow(dot_1.ro(), 2) +
			 pow(dot_2.ro(), 2) -
				 2 * dot_1.ro() * dot_2.ro() 
				   * cos(dot_1.fi() - dot_2.fi())
				);
}

double distance(DecartCS dot_1, PolarCS dot_2)
{
    DecartCS temp = dot_2.convert();
	return distance(dot_1, temp);
}

double distance(PolarCS dot_1, DecartCS dot_2)
{
    DecartCS temp = dot_1.convert();
	return distance(temp, dot_2);
}
