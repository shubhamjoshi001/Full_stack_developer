//ex. no retrum no argument
#include<iostream>
using namespace std;
void printline();
main()
{
	printline();
	cout<<endl;
	printline();	
return(0);
}
void printline()
{
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<"*";
	}
}

