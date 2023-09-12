#include<iostream>
using namespace std;
class Demo
{
	public:
		Demo()
		{
			cout<<"Creating Memory"<<endl;
		}
		~Demo()
		{
			cout<<"Releasing Memory";
		}
};
int main()
{
	Demo obj;
}
