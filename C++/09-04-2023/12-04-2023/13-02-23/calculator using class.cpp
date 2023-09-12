#include<iostream>
using namespace std;
class calculator
{
	public:
		void body()
		{
			cout<<"welcom to my calculator"<<endl;
		}
		int addition(int a,int b)
		{
			int ans=a+b;
			return ans;
		}
		  int substraction(int a,int b)
		  {
		  	int ans=a-b;
		  	return ans;
		  }
		  int multipication(int a,int b)
		  {
		  	int ans=a*b;
		  	return ans;
		  }
		  int division(int a,int b)
		  {
		  	int ans=a/b;
		  	return ans;
		  }
};
main()
{
	int a,b;
	int func;
	calculator c;
	c.body();
	int input;
	cout<<"chosose one of these options"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. substraction"<<endl;
	cout<<"3. multipication"<<endl;
	cout<<"4. division"<<endl;
	cout<<"Input the numbers "<<endl;
	cin>>input;
	switch(func)
	{
		case 1:
			cout<<"Enter any one numbers :"<<endl;
			cin>>a;
			cout<<"Enter any second numbers :"<<endl;
			cin>>b;
			cout<<c.addition(a,b)<<endl;
			break;
		case 2:
			cout<<"Enter any two numbers :"<<endl;
			cin>>a>>b;
			cout<<c.substraction(a,b)<<endl;
			break;
		case 3:
			cout<<"Enter any two numbers :"<<endl;
			cin>>a>>b;
			cout<<c.multipication(a,b)<<endl;
			break;
		case 4:
			cout<<"Enter any two numbers :"<<endl;
			cin>>a>>b;
			cout<<c.division(a,b)<<endl;
			break;
		default :
		    cout<<"invalid input....."<<endl;
		    break;
						
	}
	return 0;
}
