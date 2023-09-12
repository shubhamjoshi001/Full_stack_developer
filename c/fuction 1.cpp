#include<stdio.h>
void addition(void);//function declartion
main()
{
	printf("\n going to calculate the addition of two numbers:");
	addition(); //function calling
}
void addition() //function defintion
{
	int a,b;
	printf("\n Enter two numbers\n:");
	scanf("%d,%d",&a,&b);
	
	printf("the sum is %d",a+b);
}
