#include "StringToDouble.h"

void StringToDouble::convert(string& b, double& a) {
	const char* c = b.c_str();
	a = atof(c);
	// or
	// a = atof(b.c_str());
}