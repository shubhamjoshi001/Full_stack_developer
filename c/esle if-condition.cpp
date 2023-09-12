#include<stdio.h>
main()
{
	int num1,num2;
	printf("ENTER THE VALUE OF NUM1:");
	scanf("%d",&num1);
	printf("ENTER THE VALUE OF NUM2:");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("num1 is equal to num2\n:");
	}
	else if(num1 > num2)
	{
		printf("num1 is GRATER THEN num2\n:");
	}
	else
	{
		printf("num2 is GRATER THEN num1:");
	}
}
