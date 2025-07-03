#include<stdio.h>
void square(int no1)
{
	
	printf("\nsquare=%d",no1*no1);
}
void cube(int no1)
{
	
	printf("\ncube=%d",no1*no1*no1);
}
main()
{
	int no1;
	printf("\nenter no1=>");
	scanf("%d",&no1);
	
	
square(no1);
cube(no1);
}
