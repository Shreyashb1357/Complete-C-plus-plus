#include <cstdio>

int main (void) {

	int num1 = 10;
	int& num2 = num1;
	const int& num3 = num1;
	size_t size = sizeof(num2);
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
	printf("size of num1 = %ld\n",size);
	printf("num3 = %d\n",num3);
	printf("----------------------------\n");
	num2 = 20;
	
	printf("num2 = %d\n",num2);
	printf("num1 = %d\n",num1);
	
	printf("---------------------------------");

	printf("File name : %s\n", __FILE__);
    	printf("Line no   : %d\n", __LINE__);
    	printf("Date      : %s\n", __DATE__);
    	printf("Time      : %s\n", __TIME__);	

}
