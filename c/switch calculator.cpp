#include<stdio.h>
main()
{
	int a,b,option;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("\npress 1 for addition....:");
	printf("\npress 2 for substraction...");
	printf("\npress 3 for multipication...");
	printf("\npress 4 for division....");
	printf("\n Enter your choice:");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			printf("sum=%d",a+b);
			break;
		case 2:
			printf("subs=%d",a-b);
			break;
		case 3:
			printf("mul=%d",a*b);
			break;
		case 4:
			printf("divi=%d",a/b);
			break;
		default:
			printf("please enter the valid value:");
			
	}
}
