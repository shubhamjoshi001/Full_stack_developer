#include<iostream>
using namespace std;
class data
{
	public:
		int a,b;
		char op;
		
		data()
		{
			cout<<"Enter 1st value :";
			cin>>a;
			cout<<"Enter 2nd number :";
			cin>>b;
			cout<<"Enter operator :";
			cin>>op;
			
			switch(op)
			{
				case '1':
				 cout<<"The anser is :"<<a+b;
				 break;
				case '2':
				 cout<<"The anser is :"<<a-b;
				 break;
				case '3':
				 cout<<"The anser is :"<<a*b;
				 break;
				case '4':
				 cout<<"The anser is :"<<a/b;
				 break;   
				
			}
			
		}
};
main()
{
	data objl;
	
	
}
