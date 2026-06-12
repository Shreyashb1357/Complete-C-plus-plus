#include <iostream>
#include <string>
using namespace std;
template<typename T> 
class Selector {
    public:
        Selector(T a, T b) : first(a) , second(b) {}

        T select(int choice) {
            if(choice%2 == 0)
                return first;
            return second;
        }
    private:
        T first , second;
};

int main(void){
    int n;
    cout<<"Enter the choice : \n";
    cin>>n;

    double a=10 , b=15;
    Selector ss(a,b);
    cout<<"the value is : "<<ss.select(n)<<endl;
}