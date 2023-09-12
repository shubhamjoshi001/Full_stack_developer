#include<stdio.h>
int main()
{
	char str[20];
	int i;
	
	printf("Enter a string :");
	scanf("%s",str);
	for(i=0;str[i];i++);
	printf("String in reverse order :");
	for(i=i-1;i>=0;i--)
	
	printf("%c",str[i]);
}
