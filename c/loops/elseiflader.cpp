#include<stdio.h>
main()
{
	int num1,num2;
	printf("Enter value of num1\n:");
	scanf("%d",&num1);
	printf("Enter value of num2\n:");
	scanf("%d",&num2);
	if(num1==num2)
	{
		printf("num 1 is equal to num 2\n:");
	}
	else if(num1>num2)
	{
		printf("num 1 is grater to num 2\n:");
	}
	else
	{
		printf("num 2 is grater to num 1\n:");
	}
}
