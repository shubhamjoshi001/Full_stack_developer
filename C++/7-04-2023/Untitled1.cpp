#include<iostream>
void sum(int x,int y);
using namespace std;
int main()
{
int a,b;
cout<<"Enter two number:";
cin>>a>>b;
sum(a,b);
cout<<endl;
sum(a,b);
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	cout<<"sum of two number is ="<<z;
	
	
}
