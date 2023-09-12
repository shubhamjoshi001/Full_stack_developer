//destructor


#include<iostream>
using namespace std;
class Demo
{
	float basicsalary,totalsalary,leave,onedaysalary,workingdays;
	public:
		Demo()
		{
			cout<<"WELCOME TO SALARY MANGER SOFTWARE"<<endl;
		}
		
		void getinfo()
		{
			cout<<"Enter your basic salary :";
			cin>>basicsalary;
			cout<<"Enter your total leave :";
			cin>>leave;
			
			onedaysalary=basicsalary/30;
			workingdays=30-leave;
			totalsalary= workingdays*onedaysalary;
			
			cout<<endl<<"you will get :"<<totalsalary<<"Rupess";
		}
		
		~Demo()
		{
		
		cout<<endl<<endl;
		cout<<"Thanks for using the software...";
	    }
};
main()
{
	Demo obj;
	obj.getinfo();
}



