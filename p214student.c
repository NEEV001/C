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
struct student s1,s2,s3;

printf("\nEnter sno=>");
scanf("%d",&s1.sno);
printf("\nEnter srno=>");
scanf("%d",&s1.srno);
fflush(stdin);
printf("\nEnter sname=>");
gets(s1.sname);
printf("\nEnter engmark=>");
scanf("%d",&s1.engmark);
printf("\nEnter shindimark=>");
scanf("%d",&s1.hindimark);


printf("\nEnter sno=>");
scanf("%d",&s2.sno);
printf("\nEnter srno=>");
scanf("%d",&s2.srno);
fflush(stdin);
printf("\nEnter sname=>");
gets(s2.sname);
printf("\nEnter engmark=>");
scanf("%d",&s2.engmark);
printf("\nEnter hindimark=>");
scanf("%d",&s2.hindimark);

printf("\nEnter sno=>");
scanf("%d",&s3.sno);
printf("\nEnter srno=>");
scanf("%d",&s3.srno);
fflush(stdin);
printf("\nEnter sname=>");
gets(s3.sname);
printf("\nEnter engmark=>");
scanf("%d",&s3.engmark);
printf("\nEnter hindimark=>");
scanf("%d",&s3.hindimark);

printf("\ns1's sno=%d,srno=%d,sname=%s,engmark=%d,hindimark=%d",s1.sno,s1.srno,s1.sname,s1.engmark,s1.hindimark);
printf("\ns2's sno=%d,srno=%d,sname=%s,engmark=%d,hindimark=%d",s2.sno,s2.srno,s2.sname,s2.engmark,s2.hindimark);
printf("\ns3's sno=%d,srno=%d,sname=%s,engmark=%d,hindimark=%d",s3.sno,s3.srno,s3.sname,s3.engmark,s3.hindimark);			
}
