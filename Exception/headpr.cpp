#include "headpr.h"

double Common(float l, float w, float h, float t) {

	if (t>=l/4 || t>=w/4, t>=h/4) {
		throw t;
	}
	return (l-t*2)*(w-t*2)*(h-t*2);
}
