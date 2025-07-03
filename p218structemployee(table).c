#include <stdio.h>
#include<string.h>
struct employee
{
	int eno;
	char ename[50];
	int esalary;
};


int main()
{
struct employee e[100];
int i,n;

printf("\nenter limit=>");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("\nEnter eno =>");
    scanf("%d",&e[i].eno);
    fflush(stdin);
    printf("\nEnter ename =>");
    gets(e[i].ename);
    printf("\nEnter esalary =>");
    scanf("%d",&e[i].esalary);
}
printf("\nemployeeno\temployeename\temployeesalary");
printf("\n==============================");
for(i=0;i<n;i++)
{
	printf("\n%d\t%s\t%d",e[i].eno,e[i].ename,e[i].esalary);
	if(e[i].esalary>10000)
	{
	printf(" good salary");	
	}
	else
	{
	printf(" need to work more");	
	}
}
printf("\n==============================");


    
}

