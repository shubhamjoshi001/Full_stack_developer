#include<stdio.h>
main()
{
	//*string declatio**//
	
	char name[]={'s','h','u','b','h','a','m','\0'};
	char mobile[10];
	
	printf("Enter your name :");
	gets(name);
	
	printf("Enter your mobile no :");
	gets(mobile);
	
	puts(name);
	puts(mobile);
	
}
