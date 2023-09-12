#include<iostream>
int substraction(int x ,int y);
using namespace std;
main()
{
	int x,y,c;
	cout<<"Enter two number :";
	cin>>x>>y;
	c=substraction(x,y);
	cout<<"substraction is two number ="<<c;
}
int substraction(int x,int y)
{
	int z;
	z=x-y;
	return(z);
}
