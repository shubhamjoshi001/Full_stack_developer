//swapping numbers
#include<iostream>
using namespace std;
main()
{
	int a=5,b=10,temp,end1;
	
	cout<<"Before swapping" << end1;
	cout<<"a ="<< a <<",b="<< b << end1;
	
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping";
	cout<<"a ="<<a<<",b="<<b<<end1;
}
