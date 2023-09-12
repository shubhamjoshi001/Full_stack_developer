#include <stdio.h>
#include <string.h>
int main() {
    // Write C code here
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
         printf("Enter the first string : ");  
         scanf("%s",str1); 
        printf("Choice two");
        int i;
        for (i = 0; str1[i] != '\0'; ++i) {
            str2[i] = str1[i];
        }
        printf("string %s",str2);
        break;
        case 3:
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
    	case 4 :
    		printf("enter your name :");
    		scanf("%s",&str1);
    		printf("nameis %s",str1);
    	break;
		case 5 :
			char s[1000];  
        int vowels=0,consonants=0;
 
         printf("Enter  the string : ");
         scanf("%s",&str1);
        for(i=0;str1[i];i++)  
    {
    	if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122));
    	{
		
            if(str1[i]=='a'|| str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
		      vowels++;
            else
             consonants++;
        }
        
 	}
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
	break;
	
	case6 :  
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
	      break;
		  }

		
