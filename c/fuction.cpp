#include<stdio.h>//header file
int addition(num1,num2)//function declarion
int main()
{
	int var1,var2,var3;//variable declartion
	printf("Enter value of var1:");
	scanf("%d",&var1);
	printf("Enter value of var2:");
	scanf("%d",&var2);
	
	var3=addition(var1,var2);//Function call
	printf("sum is : %d",var3);
	return 0;
}
int addition(int num1,int num2)//function definition
{
	int sum;
	sum=num1+num2;
	return sum;
}
