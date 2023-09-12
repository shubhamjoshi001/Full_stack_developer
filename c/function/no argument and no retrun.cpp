#include<stdio.h>
void addition(void); // Function declaration
 main()
{
	printf("/n going to calculate the addition of two numbers:");
	
	addition();//function calling
	
	printf("\n function end");
	addition();
	printf("\n function end");
}
void addition(void)//function definition
{
	int a,b;
	printf("\n Enter two numbers");
	scanf("%d %d",&a,&b);
	
    printf("the sum is %d",a+b);
    
}
	
