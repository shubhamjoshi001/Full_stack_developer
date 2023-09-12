// compiler type polymorphism (operstor overloading)
#include<iostream>
using namespace std;
class complex
{
	private: int a,b;
	
	public:
		void get_data(int x ,int y)
		{
			a=x;
			b=y;
		}
		void show_data()
		{
			cout<<"value of a :"<<a<<endl;
			cout<<"value of b :"<<b<<endl;
		}
		
		complex operator +(complex obj)
		{
			complex temp;
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			return(temp);
		}
};
main()
{
	complex t1,t2,t3;
	t1.get_data(1,2);
	t2.get_data(2,3);
	
	t3=t1+t2;
	t3.show_data(
	
	);
	return(0);
}
