#include<iostream>
using namespace std;
main()
{
	int i,j,no;
	cout<<"Enter the number you want the table : ";
	cin>>no;
	for(i=1;i<=10;i++)
	{
		j=i*no;
		cout<<no<<"*"<<i<<"="<<j<<endl;
	}
}
