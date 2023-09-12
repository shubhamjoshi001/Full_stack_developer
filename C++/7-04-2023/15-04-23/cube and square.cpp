#include<iostream>
using namespace std;
class val
{
	protected:
		int value;
		
	public:
		void get_val()
		{
			cout<<"Enter your value :";
			cin>>value;
		}
};
class square : public val
{
	public:
		 int cal_sqr()
		 {
		 	get_val();
		 	return value*value;
		 }
};
class cube : public val
{
	public:
		int cal_cube()
		{
			get_val();
			return value*value*value;
		}
};
main()
{
	square s1;
	s1.get_val();
	cout<<"\n square is :"<<s1.cal_sqr();
	
	cube c1;
	c1.get_val();
	cout<<"\n cube ois :"<<c1.cal_cube();
}
	
	


