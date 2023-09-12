#include<iostream>
using namespace std;
class Demo
{
	public:
		void printResult(int i)
		{
			cout<<"Printing int result :"<<i<<endl;
		}
		void printresult(double f)
		{
			cout<<"Printing float result :"<<f<<endl;
		}
		void printresult(string s)
		{
			cout<<"Welcome to c++ :"<<s<<endl;
		}
};
main()
{
	Demo A;
	A.printResult(23);
	A.printresult(34.87);
	A.printresult("Welcome to c++");
}
