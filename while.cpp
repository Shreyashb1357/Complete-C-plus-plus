#include<cstdio>
int main(void) {
	long num;
	printf("Enter the integer: \n");
	scanf("%ld",&num);

	long sum=0;
	while (num>0) {
		sum += num%10;
		num/=10;

	}
	printf("The sum of digit is: %ld\n", sum);
}
