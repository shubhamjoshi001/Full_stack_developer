#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter the number\n :");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		printf("Grater value is %d:",x);
		else
		printf("Grater value is %d:",z);
	}
	else
	{
		if(y>z)
		printf("Grater value is %d:",y);
		else
		printf("Grater value is %d:",z);
	}
}
