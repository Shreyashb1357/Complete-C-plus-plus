#include "Banner.h"
#include <cstdio>

double purchase(Banner& each , int copy) {
    float rate = copy > 5 ? 10.5 : 12.5;
    return rate * each.Area();
}

int main(void) {
    float w , h;
    int n;

    printf("the dimension and copy : \n");
    scanf("%f%f%d",&w,&h,&n);

    Banner a(w,h);
    printf("The price of banner is : %.2lf\n" , purchase(a, n));

    CurvedBanner c(w,h,1.5);
    printf("The price of Curvedbanner is : %.2lf\n" , purchase(c, n));
    
}