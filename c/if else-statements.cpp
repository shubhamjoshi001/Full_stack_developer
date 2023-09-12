#include<stdio.h>
main()
{

int age;

	printf("Enter your age\n:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("You are Eligable for voting");
	}
	else
	{
		printf("You are not eligabl for voting");
	}
}

