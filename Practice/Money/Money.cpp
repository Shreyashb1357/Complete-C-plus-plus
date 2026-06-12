#include <iostream>
using namespace std;
class Money
{
    public:
    Money(int m, int p) {
        rupee = m;
        paisa = p;
    }

    Money operator+(Money other) 
    {
        return Money(rupee + other.rupee, paisa + other.paisa);
    }
    Money operator-(const Money& other) const
    {
        return Money(rupee - other.rupee, paisa - other.paisa);
    }
    void Print()
    {
        cout<<"the Mney: "<<rupee<<":"<<paisa<<endl;
    }
    Money operator++() 
    {
        return Money(++rupee , ++paisa);
    }
    // Money operator--(Money other) 
    // {
    //     return Money(rupee -- other.rupee, paisa -- other.paisa);
    // }

    private:
    int rupee;
    int paisa;

};

// 1)	Implement a class called Money with following data members:
// a)	int rupees
// b)	int paise

// Methods:
// For the above class,
// Implement constructors (all types), Accessor method for data members.
// Overload following operators: +, -, ++, --
// Also provide Double operator, which coverts corresponding Objects to Double.
int main(void) 
{
    int r, p;
    int s,d;
    cout<<"Enter the ruppe and paisa"<<endl;
    cin>>r>>p;
    Money a(r,p);
    cout<<"Enter the ruppe and paisa"<<endl;
    cin>>s>>d;
    Money b(s,d);
    Money c = a + b;
    c.Print();  

    ++c;
    c.Print();
}