#ifndef PCS_H
#define PCS_H

#include "rcs.h"
#include <string>
using namespace  std;

class PolarCS {
public:
	PolarCS(double, double);

	double fi()  const ;
	double ro() const ;

	void set_fi (double) ;
	void set_ro(double) ;

	string to_string() const;
	
	void print() const;
    
	class DecartCS convert() const;
	
	~PolarCS() ;

private:
	double _fi, _ro;
};

#endif // PCS_H
