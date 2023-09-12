#include<iostream>
using namespace std;
class Demo
{
	int num1=20,num2=30;
	public:
		void fun()
		{
			int sum=num1+num2;
			cout<<"addition"<<sum<<endl;
		}
		void func(int a, int b)
		{
			int sub=a-b;
			cout<<"substraction"<<sub<<endl;
		}
	
};
main()
{
	Demo objl;
	objl.fun();
	objl.func(100,30);
}
