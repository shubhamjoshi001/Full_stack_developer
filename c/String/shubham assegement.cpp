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
	int i,length=0,num;
	 char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array 
	printf("**************** Menu*****************\n");
	printf(" 1.reverse\n 2.Concatenation\n 3.Palindrome\n 4.Copy a string\n 5.Length of the string\n 6.Frequency of character in s string\n 7.Find number of vowels and consonants\n 8.Find number of blank spaces and digits\n");
	
	printf("\n Enter Number between 1 to 8 :");
	scanf("%d",&num);
	
					
	
	switch(num)
	{
	case 1 :
			char str[20];
			int i;
	
			printf("Enter a string :");
			scanf("%s",str);
			for(i=0;str[i];i++)		
					printf("String in reverse order :");
			for(i=i-1;i>=0;i--)
					printf("%c",str[i]);
			break;
	
	case 2 :
		printf("Enter name1: ");  
		    scanf("%s",str1);  
		    printf("\nEnter name2: ");  
		    scanf("%s",str2);  

			    // getting the last element of the first array
			    for(i=0;str1[i]!='\0';i++);   
			        
			    for(int j=0;str2[j]!='\0';j++)  
			    {     
			        str1[i]=str2[j];  
			        i++;
			    } 
			
			    // inserting null character at the end of the char array
			    str1[i]='\0';  
			    printf("After concatenation is done, the new concatenated string will be: %s", str1);  
    	break;
    	
    	case 3 :
    			printf("Enter str1: ");  
		    scanf("%s",str1); 
    		    isPalindrome(str1);
			   
    break;
    
    case 4 :
    	printf("Enter the first string : ");  
         scanf("%s",str1); 
        printf("Choice two");
        for (i = 0; str1[i] != '\0'; ++i) {
            str2[i] = str1[i];
        }
        printf("string %s",str2);
    break;
	
	case 5 :

  
    	printf("Enter the first string : ");  
         scanf("%s",str1); 
int temp=0;
    for (int i = 0; str1[i] != '\0'; ++i){
temp++;
	}
	printf("%d",temp);
	
	break;
	
	case 6 :
		int j,k,count=0,n;
 
    printf("Enter  the string : ");
    gets(s);

    for(j=0;s[j];j++);
    {
	
	 n=j;
    }
	printf(" frequency count character in string:\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);

}

return 0;	


    		
