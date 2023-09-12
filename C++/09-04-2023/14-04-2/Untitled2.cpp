#include<iostream>
using namespace std;
class bank
{
	private:
		int acno;
		char name[100], acctype[100];
        float bal;
        int depamount;
        int withdamount;
        
		  
	public : void getinfo()
	{
		cout<<"enter your name :";
		cin>>name;
		cout<<"Enter your account type :";
		cin>>acctype;
		cout<<"Enter your account number :";
		cin>>acno;
		cout<<"Enter your account balance :";
		cin>>bal;
		cout<<"Enter your deposit amount :";
		cin>>depamount;
		cout<<"Enter your withdraw amount :";
		cin>>withdamount;
	}
	void showinfo()
	{
		cout<<endl;
		cout<<"your name is ="<<name<<endl;
		cout<<"your account type is ="<<acctype<<endl;
		cout<<"your account number is ="<<acno<<endl;
		cout<<"your account balance is ="<<bal<<endl;
		cout<<"your deposit amount is ="<<depamount<<endl;
		cout<<"your withdraw amount is ="<<withdamount<<endl;
	}	
};
main()
{
bank objl;
objl.getinfo();objl.showinfo();

	
}

