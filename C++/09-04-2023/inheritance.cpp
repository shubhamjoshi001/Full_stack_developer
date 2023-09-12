#include<iostream>
using namespace std;

class student{
	
	protected:
		int rollno;
		float per;
		
	public:
		
		void get_data(int a,float b){
			rollno=a;
			per=b;
		}
};

class result : public student{
	
	public:
		int sptmarks;
		void get_sptmarks(int c)
		{
			sptmarks=c;
		}
		void print_data()
		{
			cout<<"\n rollno:"<<rollno;
			cout<<"\n per:"<<per;
			cout<<"\n sport marks:"<<sptmarks;
		}
};
main(){
	
	result r1;
	r1.get_data(155,99.99);
	r1.get_sptmarks(99);
	r1.print_data();
}


