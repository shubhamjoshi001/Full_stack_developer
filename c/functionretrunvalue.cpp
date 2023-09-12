#include<stdio.h>
int addition(void);
main()
{
	int result;
	printf("\n goig to caluclate two number of sum:");
	result=addition();
	printf("%d",result);
}
int addition()
{
	int a,b;
	printf("\n Enter two numbers:");
	scanf("%d%d",&a,&b);
	return a+b;
}


