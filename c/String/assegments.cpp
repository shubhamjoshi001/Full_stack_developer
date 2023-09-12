#include<stdio.h>
#include<string.h>
main()
{
	char name[10];
	int i,length=0,num;
	printf("**************** Menu*****************\n");
	printf(" 1.reverse\n 2.Concatenation\n 3.Palindrome\n 4.Copy a string\n 5.Length of the string\n 6.Frequency of character in s string\n 7.Find number of vowels and consonants\n 8.Find number of blank spaces and digits\n");
	
	printf("\n Enter Number between 1 to 8 :");
	scanf("%d",&num);
	
	 int value;
    char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array   
  int choice,count=0;
  char str[1000],ch;
   while(1)
   {
       printf("\n Enter yor choice: ");
       scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  
            printf("choice 1: ");
            value=strcmp(str1,str2);  
            if(value==0)  
            printf("strings are same");  
            else  
            printf("strings are not same");
            
            break;
            case 2:
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
    		    	
    char s[1000];  
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
        }
	   printf(" '%c' = %d \n",s[i],count);
   }


  
		
	

	
		

