#include "genboard.h"
#include <cstdio>

class fancyboard : public ads::rectangleboard,  public ads::circleboard 
{
    public: 
    fancyboard(float l, float b, ads::rawmat medium) : ads::rectangleboard(l, b, medium), ads::circleboard(b, medium) { }

    double area() {
    return rectangleboard::area() + circleboard::area();
}
};





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
    printf("--------------------------------------------------\n");
    ads::rectangleboard r(0.8*d, 0.6*d, ads::rawmat::wood);
    printf("The buy price will be: %0.2lf\n", buy(n, &r));

    printf("--------------------------------------------------\n");


    ads::circleboard c(d, ads::rawmat::metal);
    
    printf("The buy price is: %0.2lf\n", buy(n, &c));

    printf("The total loss will be: %0.2lf\n ", c.loss());

    printf("--------------------------------------------------\n");

    fancyboard fb(0.8*d, 0.6*d, ads::rawmat::wood);
    printf("The buy price of fancy board will be: %0.2lf\n", buy(n, &fb));


}