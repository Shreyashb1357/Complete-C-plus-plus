#include "banner2.h"
#include <cstdio>

double buy(banner2 as, int count) {
	float rate = 10 > count ? 10 : 15;
	return rate * as.area() * count;
}



int main (void) {
	
	banner2 a;
	
	int n;
	printf("Enter the no of banners: \n");
	scanf("%d", &n);
	
	printf("the price of %d banners is: %0.2lf\n", n, buy(a,n));

	float w, h;
	printf("The banner price is: %0.2lf \n", a.area());

	a.reshape(geomentry::Hexagonal);
	printf("the price of %d banners is: %0.2lf\n", n, buy(a,n));
	


}
