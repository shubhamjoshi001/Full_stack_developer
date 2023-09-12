#include<iostream>
using namespace std;
class A
{
	public:
		int X;
};
class B:public A
	{
		public: B()
		{
			X=2;
			cout<<"value of X :"<<X;
		}
};
main()
{
	B obj;
}
