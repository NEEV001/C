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
struct book b1,b2,b3;

printf("\nEnter bno =>");
scanf("%d",&b1.bno);
fflush(stdin);
printf("\nEnter bname =>");
gets(b1.bname);
printf("\nEnter bprice =>");
scanf("%d",&b1.bprice);

printf("\nEnter bno =>");
scanf("%d",&b2.bno);
fflush(stdin);
printf("\nEnter bname =>");
gets(b2.bname);
printf("\nEnter bprice =>");
scanf("%d",&b2.bprice);

printf("\nEnter bno =>");
scanf("%d",&b3.bno);
fflush(stdin);
printf("\nEnter bname =>");
gets(b3.bname);
printf("\nEnter bprice =>");
scanf("%d",&b3.bprice);

printf("\nb1's bno = %d bname = %s bprice = %d",b1.bno,b1.bname,b1.bprice);
printf("\nb2's bno = %d bname = %s bprice = %d",b2.bno,b2.bname,b2.bprice);
printf("\nb1's bno = %d bname = %s bprice = %d",b3.bno,b3.bname,b3.bprice);
}
