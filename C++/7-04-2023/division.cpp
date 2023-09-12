#include<iostream>
using namespace std;
class division
{
	private: int a,b;
	
	public: void divi()
	{
		cout<<"Enter any two number :";
		cin>>a>>b;
		cout<<"division is:"<<a/b;
	}
};
main()
{
	division objl;
	objl.divi();
}
