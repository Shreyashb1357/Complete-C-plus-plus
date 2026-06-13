#include <cstdio>

double Banner(float width, float height) {
	float rate = (width > height) ? 1.56 : 1.2;
	return width*height*rate;
}

double Banner(float width, float height, short layer) {
	return 2.53*width*height*layer;
}


int main (void) {

	float w, h;
	int n;

	printf("Enter the dimenssions: \n");
	scanf("%f%f", &w,&h);

	printf("No of banner: \n");
	scanf("%d", &n);

	printf("The regular banner price is: %lf \n", n* Banner(w, h));
	 printf("The premium banner price is: %lf \n", n* Banner(w, h, 5));



}
