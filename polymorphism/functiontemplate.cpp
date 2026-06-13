#include <iostream>
using namespace std;
#include <string>

template <typename T>
T selector(int as, T first, T second)
{
        if(as%2){
            return first;}
        return second;
}

int main (void) {
    int n;
    cout<<"Selector : ";
    cin>>n;

    double d1 = 225 , d2 = 333;
   
    cout<<"Selector is the:  "
        <<selector<double>(n, d1, d2)
        << endl;

   string s1= "Monday", s2 = "Sunday";

    cout<<"The selector is:"
    <<selector<string>(n, s1, s2)
    <<endl; 
}