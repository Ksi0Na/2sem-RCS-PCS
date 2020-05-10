#include "rcs.h"
#include <iostream>
#include <sstream>
#include <cmath>

DecartCS::DecartCS(double x, double y)
		: _x(x)
		, _y(y)
{}

double DecartCS::x() const { return _x; }
double DecartCS::y() const { return _y; }

void DecartCS::set_x(double x) { _x = x; };
void DecartCS::set_y(double y) { _y = y; };

string DecartCS::to_string() const
{
	stringstream ss;
	ss << "(" << _x << ", " << _y << ")";
	return ss.str();
}

void DecartCS::print() const
{
	cout << "( " << _x << " ; "
		   << _y << " )"
	   	   << endl;
}

class PolarCS DecartCS::convert() const
{
	double fi = atan(y() / x());
	double ro = sqrt(x() * x() + y() * y());
	return PolarCS(fi, ro);
}

DecartCS::~DecartCS() 
{
	_x = 0;
	_y = 0;
}
