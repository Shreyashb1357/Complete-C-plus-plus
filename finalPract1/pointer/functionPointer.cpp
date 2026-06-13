#include<cstdio>

int add(int a, int b) {
                return a+b;
        }

int main(void){
	
	

	int(*p)(int a,int b)=add;

	printf("The addition of : %d\n", p(10,20));


}
