#include<iostream>
using namespace std;
class student{
	public:
		int rollno,m1,m2,m3,total;
		
		void get_data(int a,int b,int c,int d)
		{
			rollno=a;
			m1=b;
			m2=c;
			m3=d;
		}
		
		int calculate_total()
		{
			total=m1+m2+m3;
			return total;
		}
};
main()
{
	int x,y,z,w;
	
	student s1,s2;
	
	cout<<"Enter rollno :";
	cin>>x;
	cout<<"Enter m1,m2,m3";
	cin>>y;
	cin>>z;
	cin>>w;
	
	s1.get_data(x,y,z,w);
	cout<<"Total:"<<s1.calculate_total();
}
