#include<stdio.h>
main()
{

int A[2][2],B[2][2],C[2][2];

int i,j;
printf("Enter elements A :");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&A[i][j]);
	}
}

printf("Enter elements B :");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&B[i][j]);
	}
}
printf("Enter elements C :");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf(" %d",C[i][j]=A[i][j]/B[i][j]);
	}
}
printf(" \n");
}
