#include<iostream>
using namespace std;
class Demo
{
	int num1=20,num2=30;
	public:
		void fun()
		{
			int mul=num1*num2;
			cout<<"multipiaction :"<<mul<<endl;
		}
		void func(int a, int b)
		{
			int div=a/b;
			cout<<"division :"<<div<<endl;
		}
	
};
main()
{
	Demo objl;
	objl.fun();
	objl.func(20,10);
}
