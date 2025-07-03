#include <stdio.h>
#include<string.h>
struct book
{
	int bno;
	char bname[50];	
	int bprice;
};
int main()
{
struct book b[100];
int n,i;

printf("\nEnter limit =>");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nEnter bno =>");
	scanf("%d",&b[i].bno);
	fflush(stdin);
	printf("\nEnter bname =>");
	gets(b[i].bname);
	printf("\nEnter bprice =>");
	scanf("%d",&b[i].bprice);
}

printf("\nBookno\tBookname\tBookprice");
printf("\n=======================================");
for(i=0;i<n;i++)
{
	printf("\n%d\t%s\t%d",b[i].bno,b[i].bname,b[i].bprice);
}
printf("\n=======================================");
}
