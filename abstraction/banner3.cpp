#include <cstdio>

class banner {
	public: 

	banner(float l, float h) {
		length = l;
		height = h;
		triangle = false;
	}

	void reshape(bool t) {
		triangle = t;
	}

	void resize(float l, float h) {
		length = l;
		height = h;
	}



	double area() {
		double ar = length * height;
		double pr = triangle ? 0.5:1;
		return pr * ar;
	}

	private:
		float length, height;
		bool triangle; 

};

int main (void) {
	banner a(5, 7);
	
	printf("The area is: %lf\n", a.area());


}
