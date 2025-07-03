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
struct employee e1,e2,e3;

printf("\nEnter eno =>");
scanf("%d",&e1.eno);
fflush(stdin);
printf("\nEnter ename =>");
gets(e1.ename);
printf("\nEnter esalary =>");
scanf("%d",&e1.esalary);

printf("\nEnter eno =>");
scanf("%d",&e2.eno);
fflush(stdin);
printf("\nEnter ename =>");
gets(e2.ename);
printf("\nEnter esalary =>");
scanf("%d",&e2.esalary);

printf("\nEnter eno =>");
scanf("%d",&e3.eno);
fflush(stdin);
printf("\nEnter ename =>");
gets(e3.ename);
printf("\nEnter esalary =>");
scanf("%d",&e3.esalary);
printf("\ne1's eno = %d ename = %s esalary = %d",e1.eno,e1.ename,e1.esalary);
printf("\ne2's eno = %d ename = %s esalary = %d",e2.eno,e2.ename,e2.esalary);
printf("\ne3's eno = %d ename = %s esalary = %d",e3.eno,e3.ename,e3.esalary);
    
}
