#include<stdio.h>
void square()
{
	int no1,square;
	printf("\nenter no1=>");
	scanf("%d",&no1);
	square=no1*no1;
	printf("\nsquare=%d",square);
}
void cube()
{
	int no1,cube;
	printf("\nenter no1=>");
	scanf("%d",&no1);
	cube=no1*no1*no1;
	printf("\ncube=%d",cube);
}
main()
{
square();
cube();	
}
