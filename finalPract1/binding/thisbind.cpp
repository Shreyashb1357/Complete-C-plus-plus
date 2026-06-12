#include<cstdio>

class Student{

	public:
		int roll;

		void display(){
			printf("The rool no : %d\n",roll);

		}

};

int main(void){
	
	Student s1;
	Student s2;

	s1.roll=10;
	s2.roll=20;

	s1.display();
	s2.display();

}
