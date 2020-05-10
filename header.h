#ifndef HEADER
#define HEADER

#include "rcs.h"
#include "pcs.h"

double distance(DecartCS, DecartCS);
double distance(PolarCS, PolarCS);
double distance(DecartCS, PolarCS);
double distance(PolarCS, DecartCS);

#endif // !HEADER
