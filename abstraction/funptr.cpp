#include <cstdio>

double expense(int year) {
	return 5 * year - 1;
}

double income(int year) {
	return year *year + 1;
}

double totalsum(int year, double (*sequence)(int)) {
	double total = 0;

	for (int i =1; i<=year; i++) {
		total += sequence(i);
	}
	return total;
}


int main(void) {
	int n;
	printf("Enter the no of years: \n");
	scanf("%d", &n);

	printf("The total expense in %d years is: %0.2lf \n", n, totalsum(n, &expense));

	printf("The total inclome in %d years is: %0.2lf \n", n, totalsum(n, &income));

}
