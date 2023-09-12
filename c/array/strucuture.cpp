#include<stdio.h>
struct employee
{
	int empno,age;
	char adress,empname;
	
};
int main()
{
	struct employee s[5];
	printf("Enter employee details\n\n");
	
	for(int i=0;i<5;i++)
	{
		printf("\nEnter empno :");
		scanf("%s",&s[i].empno);
		printf("Enter age:");
		scanf("%s",&s[i].age);
		printf("Enter empadress:");
		scanf("%s",&s[i].adress);
		printf("Enter empname:");
		scanf("%s",&s[i].empname);
	}
	printf("Enter employee details\n\n");l
	
	for(int i=0;i<5;i++)
	{
		printf("empno :%d",s[i].empno);
		
		printf("age :%d",s[i].age);
		
		printf("empadress :%s",s[i].adress);
		
		printf("empname :%s",s[i].empname);
		
	}
}
