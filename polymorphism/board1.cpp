#include "genboard.h"
#include <cstdio>

double buy(int count, ads::signboard* each) {
    double rate = 5 < count ? 1.25 : 2.0;
    return rate * each->area();
}

int main (void) {
    int n;
    printf("Enter the count: \n");
    scanf("%d", &n);

    int d;
    printf("Enter the size: \n");
    scanf("%d", &d);

    ads::rectangleboard r(0.8*d, 0.6*d, ads::rawmat::wood);
    printf("The buy price will be: %0.2lf\n", buy(n, &r));


    ads::circleboard c(d, ads::rawmat::metal);
    
    printf("The buy price is: %0.2lf\n", buy(n, &c));

    printf("The total loss will be: %0.2lf\n ", c.loss());
}