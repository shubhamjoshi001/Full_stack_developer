// nesteled for lop
#include<iostream>
using namespace std;
main()
{
	float per;
	int marks;
	cout<<"Enter your total marks";
	cin>>marks;
	per=marks/5;
	if(per>=60)
	cout<<"Ist division";
	
	else
	if(per>=47)
	cout<<"II nd division";
	
	else
	if(per>=43)
	cout<<"III rd divison";
	else
	cout<<"fail";
}
