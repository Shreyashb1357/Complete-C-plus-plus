#include <iostream>
using namespace std;
#include <string>

template <typename T>
class selector
{
    public:

    selector(T a, T b) : first(a), second(b) { }

    T select(int as) {
        if(as%2){
            return first;}
        return second;
    }

    private:
    T first, second;
};

int main (void) {
    int n;
    cout<<"Selector : ";
    cin>>n;

    double d1 = 225 , d2 = 333;
    selector<int> z(d1, d2);
    cout<<"Selector is the:  "
        <<z.select(n)
        << endl;

   string s1= "Monday", s2 = "Sunday";
    selector<string> x(s1,s2);
    cout<<"The selector is:"
    <<x.select(n)
    <<endl; 
}