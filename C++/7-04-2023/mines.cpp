#include<iostream>
void sum(int a,int b);
using namespace std;
main()
{
int a,b;
cout<<"Enter two number :";
cin>>a>>b;
sum(a,b);
cout<<endl;
sum(a,b);

}
void sum(int a,int b)
{
	int c;
	c=a+b;
	cout<<"sum of two number is ="<<c;
}
