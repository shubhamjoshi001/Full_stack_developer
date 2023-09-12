#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	float per;
	
	student(int a,float b)
	{
		rollno=a;
		per=b;
		
	}
	void printdata()
	{
		cout<<"\n rollno :"<<rollno<<"\n per:"<<per;
		
	}
};

main()
{
	int a;
	float b;
	cout<<"enter no and per:";
	cin>>a;
	cin>>b;
	student s1(a,b);
	s1.printdata();
	student s2(32,65.98);
	s2.printdata();
}
