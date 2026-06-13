#include "genboard.h"
#include <cstdio>

double buy(ads::signboard* each, int count) {
    double discount = 5<count ? 0.05 : 0.00;
    double payment = count * (1-discount) * each->price();
    ads::wasteful* w = dynamic_cast<ads::wasteful*>(each);
    if (w)
        return payment += count * w->loss();
    return payment;
}

int main (void) {
    int n;
    printf("Enter the no. of banner: \n");
    scanf("%d", &n);

    int s;
    printf("Enter the size of banner: \n");
    scanf("%d", &s);

    ads::rectangleboard r(0.8*s, 0.6*s, ads::rawmat::wood);
    printf("The area of wooden rect banner: %0.2lf \n", r.area());
    printf("The price of wooden rect banner: %0.2lf \n", buy(&r, n));

    printf("-------------------------------------------------------\n");

     ads::rectangleboard a(0.8*s, 0.6*s, ads::rawmat::plastic);
    printf("The area of plastic rect banner: %0.2lf \n", a.area());
    printf("The price of plastic rect banner: %0.2lf \n", buy(&a, n));

    printf("-------------------------------------------------------\n");

     ads::rectangleboard b(0.8*s, 0.6*s, ads::rawmat::metal);
    printf("The area of metallic rect banner: %0.2lf \n", b.area());
    printf("The price of metallic rect banner: %0.2lf \n", buy(&b, n));

    printf("-------------------------------------------------------\n");

    ads::circleboard c(s, ads::rawmat::wood);
    printf("The area of circle banner: %0.2lf \n", c.area());
    printf("The price of circle banner: %0.2lf \n", buy(&c, n));

    printf("-------------------------------------------------------\n");

    ads::circleboard e(s, ads::rawmat::plastic);
    printf("The area plastic of circle banner: %0.2lf \n", e.area());
    printf("The price of plastic circle banner: %0.2lf \n", buy(&e, n));

    printf("-------------------------------------------------------\n");

    ads::circleboard f(s, ads::rawmat::metal);
    printf("The area of metallic circle banner: %0.2lf \n", f.area());
    printf("The price of metallic circle banner: %0.2lf \n", buy(&f, n));

    printf("-------------------------------------------------------\n");




}