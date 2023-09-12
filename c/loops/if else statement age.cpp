#include<stdio.h>
main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	printf("not aligable for vote");
}
