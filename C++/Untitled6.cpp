#include<iostream>
using namespace std;
class student{
	public:
		int rollno,m1,m2,m3,total,per;
		
		student()
		{
			cout<<"Enter rollno :";
			cin>>rollno;
			cout<<"m1,m2,m3";
			cin>>m1>>m2>>m3;
		}
		int calculate_total()
		{
			total=m1+m2+m3;
			return total;
		}
		float calculate_per()
		{
			per=(total*100)/300;
			return per;
		}
};
main()
{
	student s1,s2;
	cout<<"total :"<<s1.calculate_total();
	cout<<"/npercentage :"<<s1.calculate_per();
	
	cout<<"/ntotal:"<<s2.calculate_total();
	cout<<"/npercentage :"<<s2.calculate_per();
	
}
