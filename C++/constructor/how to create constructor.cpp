#include<iostream>
using namespace std;
class Demo
{
	int a;
	public: Demo()
	{
		a=2;
		cout<<a;
	}
	Demo(int x)
	{
		a=x;
		cout<<a;
	}
};
main()
{
	Demo objl;
	Demo obj2(123);
}
