#include<stdio.h>
main()
{
	int value[5];
	printf("Enter 5 value :");
	 for(int i = 0; i < 5; ++i)   // taking input and storing it in an array
{
     scanf("%d",&value[i]);
  }

  printf("Displaying integers: ");

  for(int i = 0; i < 5; ++i)   // printing elements of an array
{
     printf("%d\n", value[i]);
  }

}
	
