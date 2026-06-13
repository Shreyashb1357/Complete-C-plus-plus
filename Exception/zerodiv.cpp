#include "zerodiv.h"

double divisible(float a, float b) {

	if (b==0){
		throw b;
	}
	return a/b;

}
