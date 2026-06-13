#include <cstdio>
#include "headpr.h"

int main (void) {
	float l=0, w=0, h=0;
	float t=0;
	
	printf("Enter the dimension: \n");
	scanf("%f%f%f",&l,&w,&h);

	printf("Enter the thickness: \n");
	scanf("%f", &t);

	
	try {
	double vol = (t == 0) ? Common(l, w, h) : Common(l, w, h, t);
	printf("The volume is: %lf\n", vol);
	}

	catch (float a) {
		printf("The thickness %f is invalid!!!!!!\n", a);
	}
	puts("Good Bye!!\n");

}


