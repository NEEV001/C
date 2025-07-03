#include<stdio.h>
main()
{
	int no1,no2,no3;
	printf("\n enter no1=>");
	scanf("%d",&no1);
	printf("\n enter no2=>");
	scanf("%d",&no2);
	printf("\n enter no3=>");
	scanf("%d",&no3);
	if(no1>no2&&no1>no3)
	{
	printf("\n no1 is greater");	
	}
	else if(no2>no3&&no2>no1)
	{
	printf("\n no2 is greater");	
	}	
	else if(no3>no1&&no3>no2)
	{
	printf("\n no3 is greater");	
		}
	else
	{
	printf("\n all are equal");	
	}	
}
