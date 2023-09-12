#include<stdio.h>
#include<string.h>
void isPalindrome(char str[])
						{
					    // Start from leftmost and 
					    // rightmost corners of str
					    int l = 0;
					    int h = strlen(str) - 1;
					  
					    // Keep comparing characters 
					    // while they are same
					    while (h > l)
					    {
					        if (str[l++] != str[h--])
					        {
					            printf("%s is not a palindrome\n", str);
					            return;
					        }
					    }
					    printf("%s is a palindrome\n", str);
						}
main()
{
	char name[10];
	int i,length=0,num,temp;
	char str[1000];
	char str1[20];  // declaration of char array  
   	char str2[20];  // declaration of char array 
	printf("**************** Menu*****************\n");
	printf(" 1.reverse\n 2.Concatenation\n 3.Palindrome\n 4.Copy a string\n 5.Length of the string\n 6.Frequency of character in s string\n 7.Find number of vowels and consonants\n 8.Find number of blank spaces and digits\n");
	
	printf("\n Enter Number between 1 to 8 :");
	scanf("%d",&num);
	
					


}


    		
