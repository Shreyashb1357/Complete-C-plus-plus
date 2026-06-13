#include<cstdio>

class ticket {
    public:
    ticket(float p , float d) {
        price = p;
        distance = d;
    }

    virtual double cost() const {
        return price * distance;
    }

    void print() {
        printf("The total cost for %f km is : %0.2lf \n", distance, cost());
    }


    private:
    float price;
    float distance; 

};

class DiscountedTicket : public ticket
{
    public:
    DiscountedTicket(float p, float d, int a) : ticket(p, d), dis(a) {}

    double cost() const {
        double reduce = (dis/100.0) * ticket::cost();
        return ticket::cost() - reduce;
    } 
    private: 
    int dis;

};

class premiumticket : public ticket {
    public:
    premiumticket(float p, float d, int s = 0 ) : ticket(p, d), servicecharge(s) { }

    double cost() const {
        return servicecharge + ticket::cost();
    }

    private:
    int servicecharge;

};

double totalpayment(int count, const ticket& aa) {
    return count * aa.cost();
}

int main (void) {
    int n;
    printf("How many ticket you want? \n");
    scanf("%d",&n);

    printf("-------------------------------------------------------------\n");

    ticket ti(8, 225);
    ti.cost();
    printf("The total cost of ticket is : %0.2lf \n", totalpayment(n, ti));

    printf("-------------------------------------------------------------\n");

    DiscountedTicket dt(8, 225, 10);
    printf("The total cost of discounted ticket is : %0.2lf \n", totalpayment(n, dt));

    printf("-------------------------------------------------------------\n");

    premiumticket pt(8, 225, 150);
    printf("The total cost of premium ticket is : %0.2lf \n", totalpayment(n, pt));

    printf("-------------------------------------------------------------\n");


}