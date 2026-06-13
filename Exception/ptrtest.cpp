#include <cstdio>

int average(int num1, int num2, int* dev) {
	
	dev[0] = (num1>num2) ? (num1-num2)/2 : (num2-num1)/2;
	return (num1+num2)/2;

}

int swap(int* num1, int* num2) {
	int c = *num1;
	*num1 = *num2;
	*num2 = c;
	return 0;
}


int main (void) {

	int a, b, c =0;

	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	int d = average(a,b,&c);

	printf("the average is: %d and stadard deviation is: %d\n", d, c);

	swap (&a, &b);
	printf("The swapped values are a= %d and b = %d", a,b);	

}
