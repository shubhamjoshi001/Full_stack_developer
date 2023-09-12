#include<stdio.h>
int addition(void);
int main()
{
	int result;
	printf("Enter of any numbers :");
	result=addition();
	printf("%d",result);
}
int addition()
{
	int a,b;
	printf("\n Enter two numbers :");
	scanf("%d %d",&a,&b);
	retrun a+b;
}
