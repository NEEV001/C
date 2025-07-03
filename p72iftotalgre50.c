#include<stdio.h>
main()
{
	int no1,no2;
	printf("\n enter no1=>");
	scanf("%d",&no1);
	printf("\n enter no2=>");
	scanf("%d",&no2);
	if(no1+no2>50)
	{
	printf("\n multi=%d",no1*no2);	
	}
	else 
	{
	printf("\n add=%d",no1/no2);	
	}
	
}
