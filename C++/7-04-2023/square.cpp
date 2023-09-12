#include<iostream>
using namespace std;
class per
{
	private: int a;
	
	public : void square()
	{
		cout<<"Enter any number :";
		cin>>a;
		cout<<"square is:"<<a*a;
	}
};
main()
{
	per objl;
	objl.square();
}
