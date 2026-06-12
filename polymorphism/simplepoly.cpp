#include <cstdio>

class banner {
    public :
    banner (float w, float h) : width(w) , height(h) {}

    void resize(float w , float h) {
        width = w;
        height = h;
    }

    virtual double area() const {
        return width * height;
    }

    void print() {
        printf("The area of banner : %0.2lf \n", area());
    }

    private:
    float width, height;  
};

class curvebanner : public banner {
    public:
    curvebanner(float w, float h, float r) : banner(w,h), radius(r) { }
    double area() const {
        return banner::area() - 0.86 * radius * radius;
    }
    private:
    float radius;
};

double buy(int copy, const banner& aa) {
    double rate = 0.5; 
    return aa.area() * rate;
}


int main (void) {
    banner a(10 , 5);
   // a.print(); 

    int n;
    printf("Enter the no of copies: \n");
    scanf("%d",&n);

   printf("---------------------------------------------------------\n");
    printf("The price of normal banner is: %0.2lf \n", buy(n, a));

    printf("---------------------------------------------------------\n");

    curvebanner b(10, 5, 1.5);
    printf("Total payment for curved banner: %.2lf\n", buy(n,b));

}