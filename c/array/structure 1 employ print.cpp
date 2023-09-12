#include<stdio.h>
struct employee
{
	int empno,age;
	char adress[50],empname[50];
	
};
int main()
{
	struct employee s[1];
	printf("Enter employee details\n\n");
	
	for(int i=0;i<1;i++)
	{
		printf("\nEnter empno :");
		scanf("%d",&s[i].empno);
		printf("Enter age:");
		scanf("%d",&s[i].age);
		printf("Enter empadress:");
		scanf("%s",&s[i].adress);
		printf("Enter empname:");
		scanf("%s",&s[i].empname);
	}
	printf("Enter employee details\n\n");
	
	for(int i=0;i<1;i++)
	{
		printf("\n empno :%d",s[i].empno);
		
		printf("\n age :%d",s[i].age);
		
		printf("\n empadress :%s",s[i].adress);
		
		printf("empname :%s",s[i].empname);
		
	}
}
