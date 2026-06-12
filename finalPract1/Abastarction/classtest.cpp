#include "banner.h"
#include <cstdio>

int purchase(const Banner* each  , int copy) {
    float rate = copy > 5 ? 15.5 : 20.5;
    return rate * each->Area();
}

int main(void) {
    float w,h;
    printf("Enter the diamentions : \n");
    scanf("%f%f",&w,&h);
    Banner a;
    //a.Resize(w,h);
    double b = a.Area();
    printf("The area is : %.2lf\n", b);

    a.Resize(w,h);
    a.reshape(false);
    double c = a.Area();
    printf("The area is : %.2lf\n", c);

    int p;
    printf("Enter the copy : \n");
    scanf("%d",&p);
    printf("The price is : %d", purchase(&a , p));

}