#include "zerodiv.h"
#include <cstdio>

int main (void) {

	float a,b;
	printf("Enter the number: \n");
	scanf("%f%f", &a,&b);

	float c;
	try {
	c = divisible(a,b);
	printf("Divide is: %.2f\n", c);
	}
	catch (float d) {
		printf("The %.2f is not divisible\n", d); 
	}
	
		

}
