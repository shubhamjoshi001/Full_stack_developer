#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter any three number:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y)
	{
		if(x>z)
			printf("grater value is %d",x);
		else
			printf("grater value is %d:",z);
	}
	else
	{
		if(y>z)
			printf("grater value is %d",y);		
		else
			printf("grater value is %d",z);
		
	}
	return 0;
	
}
