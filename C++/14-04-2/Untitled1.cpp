#include<iostream>
using namespace std;
class bank
{
	private:
		int acno;
		char name[100], acctype[100];
        float bal;
		  
	public : void getinfo()
	{
		cout<<"enter your name :";
		cin>>name;
		cout<<"\nEnter your account type :";
		cin>>acctype;
		cout<<"\nEnter your account number :";
		cin>>acno;
		cout<<"\nEnter your account balance :";
		cin>>bal;
	}
	void showinfo()
	{
		cout<<endl;
		cout<<"your name is ="<<name<<endl;
		cout<<"your account type is ="<<acctype<<endl;
		cout<<"your account number is ="<<acno<<endl;
		cout<<"your account balance is ="<<bal<<endl;
	}	
};
main()
{
bank objl;
objl.getinfo();
objl.showinfo();

	
}

