#include<iostream>
using namespace std;
class rectangle
{
	int a,b;
	
	public: rectangle()
	{
		cout<<"Enter any two value:";
		cin>>a>>b;
		
		cout<<"rectangle is:"<<a*b;
	} 
};
int main()
{
	rectangle obj;
}



