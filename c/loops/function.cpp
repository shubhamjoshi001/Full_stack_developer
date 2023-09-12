#include <stdio.h>   //Header File 
int addition(int num1, int num2)  //Function declaration
/*
Here int is a return type, addition is a function name and int num1, int num2 is a argument list 
*/
 //intmain()
{
     int var1, var2,var3;      //variable declaration
     printf("Enter number 1 : ");
     scanf("%d", &var1);
     printf("Enter number 2 : ");
     scanf("%d",&var2);

     var3= addition(var1, var2);  // Function Call
     printf (" Sum is : %d", var3);

     return 0;
}
