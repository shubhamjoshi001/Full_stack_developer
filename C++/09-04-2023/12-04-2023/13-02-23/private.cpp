#include<iostream>
using namespace std;
class Demo
{
	private:
		int a;//private member
	public:
		void getvalue()
		{
			a=2;
			cout<<a;
		}
		
};
main()
{
	Demo obj1;
	
	obj1.getvalue();
	
	
}
