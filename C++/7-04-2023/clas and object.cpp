#include<iostream>
#include<string>
using namespace std; 
class Admissionform
{
	private:
		string name;
		string fname;
		int age;
		public : void filltheform()
		{
			cout<<"Enter your name :";
			cin>>name;
			cout<<"Enter your father name :";
			cin>>fname;
			cout<<"Enter your age :";
			cin>>age;
		}
		void showinfo()
		{
			cout<<endl;
			cout<<"Your name is ="<<name<<endl;
			cout<<"your fname is ="<<fname<<endl;
			cout<<"Your age is ="<<age<<endl;
		}
};
int main()
{
	Admissionform shubham,sunil;
	shubham.filltheform();
	sunil.filltheform();
	shubham.showinfo();
	shubham.showinfo();
	
}
