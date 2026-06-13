#include<cstdio>

int main(void){
	int arr[] = {10,20,30};
	int *p=&arr[2];

	//printf("The value at position 1 is : %d\n", p[0]);
	 printf("The value at position 1 is : %d\n", *p);
	
	int a=50;
	int* q=&a;
	printf("The value at position a is : %d\n", *q);
	
	
	return 0;


}
