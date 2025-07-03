#include<stdio.h>
#include<string.h>
struct student
{
	int sno,srno;
	int engmark;
	int hindimark;
	char sname[50];
};
int main()
{
struct student s[100];
int i,n;

printf("\nEnter limit=>");
scanf("%d",&n);
for(i=0;i<n;i++)
{

printf("\nEnter sno=>");
scanf("%d",&s[i].sno);
printf("\nEnter srno=>");
scanf("%d",&s[i].srno);
fflush(stdin);
printf("\nEnter sname=>");
gets(s[i].sname);
printf("\nEnter engmark=>");
scanf("%d",&s[i].engmark);
printf("\nEnter shindimark=>");
scanf("%d",&s[i].hindimark);
}

printf("\nstudentuno\tstudentrno\tstudentname\tengmark\thindimark");
printf("\n============================");
for(i=0;i<n;i++)
{
printf("\n%d\t%d\t%s\t%d\t%d",s[i].sno,s[i].srno,s[i].sname,s[i].engmark,s[i].hindimark);	
}
printf("\n============================");
}

