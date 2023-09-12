#include<iostream>
using namespace std;
class substraction
{
	private: int a,b;
	
	public: void subs()
	{
		cout<<"Enter of any Number :";
		cin>>a>>b;
		cout<<"Two number substraction is="<<a-b;
	}
	
};
main()
{
	substraction obj;
	obj.subs();
}
