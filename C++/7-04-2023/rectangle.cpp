#include<iostream>
using namespace std;
class rectangle
{
	private: int a;
	
	public : void getch(int a,int b)
	{
		cout<<"Enter any number :";
		cin>>a>>b;
		cout<<"rectangle is:"<<a*b;
	}
};
main()
{
	rectangle objl;
	objl.getch(23,34);
}
