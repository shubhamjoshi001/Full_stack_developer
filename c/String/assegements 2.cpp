#include <stdio.h>
#include <string.h>
int main() {
    // Write C code here
    int value;
    char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array   
  int choice;
  
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
	      printf(" '%c' = %d \n",s[i],count);
	      break ;
        }
    }
}

	   
  
 	 
 	 
     
        
               
        
    
   


