#include<stdio.h>
void max2(int a,int b)
{
	if(a>b)
	{
	printf("\n no1 is greater");	
	}
	else
	{
	printf("\n no2 is greater");	
	}
}
void add(int a,int b)
{
	printf("\nsum=%d ",a+b);
}
main()
{
	int a,b;
	printf("\nenter 2nos=>");
	scanf("%d %d",&a,&b);

	max2(a,b);
	add(a,b);	
}
