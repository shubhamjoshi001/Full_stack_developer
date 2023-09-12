#include<stdio.h>
main()
{
	char name[10];
	int i,length=0;
	
	printf("Name of string :");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
	printf("length of string :%d\n",length);
	
	printf("reverse of string :");
	for(i=length-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
}
