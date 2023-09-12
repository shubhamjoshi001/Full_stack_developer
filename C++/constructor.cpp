#include<iostream>
using namespace std;
class A{
	public:
	A(){
		cout<<"\n hello form constructor";
	}
	void printMsg()
	{
		cout<<"\n Good morning.....";
		}	
};
main(){
	A obj1,obj2;
	obj1.printMsg();
	obj2.printMsg();
	
	A obj3;
}
