#include<iostream>
using namespace std;
class first
{
	public:
		
	int a,b;
	
	void myfun1()
	{ cout<<"\n hello from function 1";
		}
		
	void myfun2()
	{ cout<<"\n hello from fuction 2";
			}		
			
};

main()
{
	first f1,f2,f3;
	
	f1.a=10;
	f1.b=20;
	cout<<"\nf1.a= "<<f1.a<<"\n f1.b="<<f1.b;
	f1.myfun1();
	f1.myfun2();
	cout<<"\n===================";
	f2.a=10;
	f2.b=20;
	cout<<"\nf2.a= "<<f2.a<<"\n f2.b="<<f2.b;
	f2.myfun1();
	f2.myfun2();
	cout<<"\n===================";
	f3.a=10;
	f3.b=20;
	cout<<"\nf3.a= "<<f3.a<<"\n f3.b="<<f3.b;
	f3.myfun1();
	f3.myfun2();
	
	
	}










