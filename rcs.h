#ifndef RCS_H
#define RCS_H

#include "pcs.h"
#include <string>
using namespace  std;

class DecartCS {
public:
	DecartCS(double x, double y);

	double x() const;
	double y() const;

	void set_x(double);
	void set_y(double);

	string to_string() const;
	
	void print() const;
	
	class PolarCS convert() const;

	~DecartCS() ;
private:
	double _x, _y;
};

#endif // RCS_H
