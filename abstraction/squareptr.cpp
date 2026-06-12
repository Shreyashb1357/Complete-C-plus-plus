#include <cstdio>

double square(int y) {
	return y*y;
}
double cube(int y) {
	return y*y*y;
}

double calculatesum(int y, double(*ptr)(int)) {
	double total = 0;
	for(int i = 1;i<=y;i++) {
		total += ptr(i);
	}
	return total;
}


int main(void) {
	int n;
	printf("Enter the number: \n");
	scanf("%d", &n);

	printf("The sum of square: %0.2lf \n", calculatesum(n,&square));
	printf("The sum of cube: %0.2lf \n", calculatesum(n,&cube));


}
