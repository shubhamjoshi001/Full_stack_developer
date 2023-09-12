#include<iostream>
#include<string>
using namespace std;
class admissionform
{
	private :
		string name;
		string fname;
		int age;
		public :void fillform()
		{
			cout<<"Enter your name :";
			cin>>name;
			cout<<"Enter your fname :";
			cin>>fname;
			cout<<"Enter your age :";
			cin>>age;
		}
		void showinfo()
		{
			cout<<endl;
			cout<<"Your name is ="<<name<<endl;
			cout<<"Your fname is ="<<fname<<endl;
			cout<<"Your age is ="<<age<<endl;
		}
};
int main()
{
	admissionform shubham,sunil;
	shubham.fillform();
	sunil.fillform();
	shubham.showinfo();
	sunil.showinfo();
return(0);	
}
