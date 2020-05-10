#include "pcs.h"
#include <iostream>
#include <sstream>
#include <cmath>

PolarCS::PolarCS(double fi, double ro)
		: _fi(fi)
		, _ro(ro)
{}

double PolarCS:: fi() const { return _fi; }
double PolarCS::ro() const { return _ro; }

void PolarCS::set_fi (double fi) { _fi = fi; };
void PolarCS::set_ro(double ro) { _ro = ro; };

string PolarCS::to_string() const
{
	stringstream ss;
	ss << "(" << _fi << ", " << _ro << ")";
	return ss.str();
}

void PolarCS::print() const
{
	cout << "( " << _fi << " ; "
		<< _ro << " )"
		<< endl;
}

DecartCS PolarCS::convert() const
{
	double x = cos(fi()) * ro();
	double y = sin(fi()) * ro();
	return DecartCS(x, y);
}

PolarCS::~PolarCS() 
{
	_fi = 0;
	_ro = 0;
}
