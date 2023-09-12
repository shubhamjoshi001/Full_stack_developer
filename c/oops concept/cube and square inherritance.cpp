#include<iostream>
using namespace std;
class val
{
	protected:
		int value;
	public:
		void get_va()
		{
			cout<<"enter your value :";
			cin>>value;
		}
};
class square : public val
{
	public:
		int cal_sqr();
		{
			get_va()
			return value*value;
		}
		
};
class cube : public val
{
	public:
		int cal_cube();
		{
			get_val()
			return value*value*value;
		}
};
main()
{
	square sl;
	sl.get_va();
	cout<<"\n square of 2:"<<sl.cal_sqr();
	
	cube c1;
	c1.get_va();
	cout<<"\n cube of 3:"<<c1.cal_cube();
}

