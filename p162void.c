#include<stdio.h>
void add()
{
	int a,b;
	printf("\nEnter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d ",a+b);
}
void sub()
{

int a,b;
	printf("\nEnter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d ",a-b);
}
void mul()
{
	int a,b;
	printf("\nEnter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d ",a*b);
}
void div()
{
	int a,b;
	printf("\nEnter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d ",a/b);
}
main()
{
add();
sub();
mul();
div();	
}
