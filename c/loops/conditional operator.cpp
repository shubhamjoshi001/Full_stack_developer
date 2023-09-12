#include<stdio.h>
main()
{
	int age;
	printf("Enter your age\n:");
	scanf("%d",&age);
	(age>=18)?printf("eligible for vote:"):printf("not eligible for vote:");
	
}
