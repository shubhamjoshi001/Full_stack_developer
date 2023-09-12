#include<iostream>
using namespace std;
class A
{
	public:
		
		int a;
		A(){
			cout<<"\n simple constructor";
		}
		~A()
		{
			cout<<"\n distructor called";
		}
};

main(){
	A obj;
	A obj1;
}	




