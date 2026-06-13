#include <cstdio>

double home(int year) {
	float rate = year<10 ? 7.25 : 9.50;
	return rate;
}

double car(int year) {
	float rate = year<10 ? 6.2 : 7.50;
        return rate;
}


double homeemi(float loan, int year) {
	
	double intr = loan*home(year)*year/100;
	double emi = (intr+loan)/(year * 12);
	return emi;
}


double caremi(float loan, int year) {
        double intr = loan*car(year)*year/100;
        double emi = (intr+loan)/(year * 12);
        return emi;
}


int main (void) {

	float  sal;
	int year;

	printf("What is your salary: \n");
	scanf("%f", &sal);

	printf("in how many year you will pay loan: \n");
	scanf("%d",&year);
	int a;
	printf("Which type of loan you want:\n 1. home\n 2.car\n");
	scanf("%d", &a);

	float ln;
	printf("How much loan you want? : \n");
	scanf("%f", &ln);

	if (a == 1) {
	printf("Home loan rate is: %lf\n", home(year));
	printf("The emi will be : %lf\n", homeemi(ln,year));
	}
	else {
		printf("Car loan rate is : %lf\n", car(year));
		printf("The emi will be : %lf\n", caremi(ln,year));
	}
}
