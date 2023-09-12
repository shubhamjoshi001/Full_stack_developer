#include<iostream>
using namespace std;
main()
{
	char name[20];
	int i,length=0;
	cout<<"Enter the string : ";
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			continue;
		}
		length++;
	}
	cout<<"total charcter : "<<length;
}

