#include <cstdio>

enum hosbed {economy = 1, premium = 2, deluxe = 3};

class patient {
    public:

    patient(int i, int d, hosbed hb) {
        patientid = i;
        days = d;
        type = hb;
    }

    double perday() {
        return (type == economy) ? 500 : (type == premium) ? 350 : (type == deluxe) ? 200 : 250;     
    }

    double amount() {
        return days * perday();
    }


    private:
    int patientid;
    int days;
    hosbed type;
};

class inhousepatient : public patient
{
    public:
    inhousepatient(int i, int d, hosbed hb, float dis = 0.1) : patient(i,d,hb), discount(dis) {}

    double amount() {
        return patient::amount() - patient::amount() * discount;
    }

    private:
    float discount;
};

int main (void) {
    patient p(101,1, deluxe);
    printf("The total bill payable is: %0.2lf \n", p.amount());

    inhousepatient i(102, 1, deluxe);
  
    printf("The total bill payable is: %0.2lf \n", i.amount());

}