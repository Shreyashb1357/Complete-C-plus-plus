#include <cstdio>

class interval {

	public:
		interval(int m=0, int s=0) {
			min = m+s/60;
			sec = s % 60;
			id = 100+ (++nid);
			printf("Interval <%d> instance initialized \n", id);
		}

		double time(){
			return 60*min+sec;
		}

		void adjust(long t) {
			min = t/60;
			sec = t%60;
		}
		void print() const {
			printf(" the %d Interval: %d : %d \n", id, min,sec);
		}

		 static int Count()
    		{
     		   return nid;
  			  }

		 ~interval() {
			 printf("The instance <%d> is finalized\n",id);
		 }





	private:
		int min, sec;
		int id;
		static int nid;
		
};
int interval::nid=0;


int main(void) {
	int n;
	printf("Enter the number of intervals: \n");
	scanf("%d",&n);

	if (n==1) {
		interval* a = new interval(4, 80);
		a[0].print();

		delete a;
	}

	else {
		interval * a = new interval[n];
		for (int i = 0; i< n; i++) {
			a[i].adjust(30*i);
			a[i].print();
		
		}
		delete[] a;

	}
	
}
