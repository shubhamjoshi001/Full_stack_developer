#include<iostream>
using namespace std;
int sum(int x,int y);
main()
{
	int a,b,c;
	cout<<"Enter two number:";
	cin>>a>>b;
	c=sum(a,b);
	cout<<"sum of two number is ="<<c;
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
