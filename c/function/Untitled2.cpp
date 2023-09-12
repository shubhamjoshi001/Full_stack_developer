#include<stdio.h>
void addition(void); // Function declaration
int main()
{
	printf("/n going to calculate the addition of two numbers:");
	
	addition();//function calling
}
void addition()//function definition
{
	int a,b;
	
	printf("\n Enter first numbers :");
	scanf("%d",&a);
	printf("\n Enter second numbers :");
	scanf("%d",&b);
	
    printf("the sum is %d :",a+b);
}
	
