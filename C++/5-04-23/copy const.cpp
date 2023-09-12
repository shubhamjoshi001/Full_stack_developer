#include<iostream>
using namespace std;
class A
{
	public:
		
		int a;
		A(){
			cout<<"\n simple constructor";
		}
		A(int x)
		{
			a=x;
		}
		A(const A &old)
		{
			a=old.a;
		}
};

main(){
	
	A obj1(50);
	A obj2(obj1);
	
	cout<<"\n obj1 a"<<obj1.a;
	cout<<"\n obj2 a"<<obj2.a;
}	




