#include<stdio.h>
main()
{
	int number=0;
	printf("ENTER OF number\n:");
	scanf("%d",&number);
	
	switch(number)
	{
		case 1:
			printf("number is equal to 1:");
			break;
		case 2:
			printf("number is equal to 2:");
			break;
		default :
			printf("number is not equal to 1,2:");
	}
}
