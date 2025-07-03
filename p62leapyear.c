#include<stdio.h>
main()
{
	int year;
	printf("\n enter year=>");
	scanf("%d",&year);
	if(year%4==0)
	{
	printf("\n leap year");	
	}
	else
	{
	printf("\n not a leap year");
	}
}
