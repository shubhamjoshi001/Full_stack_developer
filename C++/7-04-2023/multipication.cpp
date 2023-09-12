#include<iostream>
using namespace std;
class multipication
{
	private : int a,b;
	
	public : void multi()
	{
		cout<<"Enter any two number";
		cin>>a>>b;
		cout<<"multipication is two number:"<<a*b;
		cout<<endl;
		cout<<endl;
	}
};
main()
{
	multipication obj1,obj2,obj3;
	obj1.multi();
	obj2.multi();
	obj3.multi();
}
