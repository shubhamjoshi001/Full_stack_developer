#include<stdio.h>
main()
{

int A[3][3],B[3][3],C[3][3];

int i,j;

printf("Enter elements A :");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&A[i][j]);
	}
}

printf("Enter elements B :");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&B[i][j]);
	}
}
printf("Enter elements C :");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf(" %d",C[i][j]=A[i][j]+B[i][j]);
	}
}
printf(" \n");
}
