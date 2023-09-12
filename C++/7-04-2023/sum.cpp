#include<iostream>
using namespace std;
class Add
{
	private: int a,b;
	
	public: void sum()
	{
		cout<<"Enter any two number :";
		cin>>a>>b;
		cout<<"sum of two number is :"<<a+b;
	}
		
};
main()
{
Add obj;
obj.sum();
}

