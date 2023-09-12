#include<iostream>
using namespace std;
class A
{
	public:
		int X;
		A()
		{
			X=20;
			cout<<"I am from a class constuctor"<<endl;
			cout<<"value of X :"<<X<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			X=30;
			cout<<"I am from b class constructor"<<endl;
			cout<<"Value of X :"<<X<<endl;
		}
};
main()
{
	B obj;
}


