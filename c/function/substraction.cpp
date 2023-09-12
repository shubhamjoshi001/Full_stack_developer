#include<stdio.h>
void substraction(void);//Function calling
int main()
{
	printf("Enter of any numbers :");
	substraction();//function calling
}
void substraction()//functionn definition
{
	int a,b;
	
	printf("\n Enter first numbers :");
	scanf("%d",&a);
	printf("\n Enter second numbers :");
	scanf("%d",&b);
	
    printf("the subs is %d :",a-b);
}
