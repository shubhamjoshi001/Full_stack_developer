// c++ calculator
#include<iostream>
using namespace std;
main()
{
	int a,b,c,choice;
	cout<<"\npress 1 for addition :";
	cout<<"\npress 2 for asubstraction :";
	cout<<"\npress 3 for multipication :";
	cout<<"\npress 4 for divide :";
	cout<<"\nEnter your choice :";
	cin>>choice;
	switch(choice)
	{
	case 1:
	cout<<"Enter two numbers :";
	cin>>a>>b;
	c=a+b;
	cout<<"Result is="<<c;
	break;
	case 2:
	cout<<"Enter two numbers :";
	cin>>a>>b;
	c=a-b;
	cout<<"Result is="<<c;
	break;
	case 3:
	cout<<"Enter two numbers :";
	cin>>a>>b;
	c=a*b;
	cout<<"Result is="<<c;
	break;
	case 4:
	cout<<"Enter two numbers :";
	cin>>a>>b;
	c=a/b;
	cout<<"Result is="<<c;
	break;
	
	default:
	cout<<"Wrong choice :";	
	
	}
	
}
