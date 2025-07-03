#include<stdio.h>
main()
{
	int year,month;
	printf("\n enter year=>");
	scanf("%d",&year);
	printf("\n enter month=>");
	scanf("%d",&month);
	if(month==1)
	{	
	printf("\n january %d has 31 days",year);
	}
	else if(month==2)
	{
	printf("\n february %d has 28 days",year);	
	}
	else if(month==3)
	{
	printf("\n march %d has 31 days",year);	
	}
	else if(month==4)
	{
	printf("\n april %d has 30 days",year);	
	}
	else if(month==5)
	{
	printf("\n may %d has 31 days",year);
	}
	else if(month==6)
	{
	printf("\n june %d has 30 days",year);	
	}
	else if(month==7)
	{
	printf("\n july %d has 31 days",year);	
	}
	else if(month==8)
	{
	printf("\n august %d has 30 days",year);	
	}
	else if(month==9)
	{
	printf("\n september %d has 31 days",year);	
	}
	else if(month==10)
	{
	printf("\n october %d has 30 days",year);	
	}
	else if(month==11)
	{
	printf("\n november %d has 31 days",year);	
	}
	else if(month==12)
	{
	printf("\n december %d has 31 days",year);	
	}
	else
	{
	printf("\n wrong month number");
		
	}
}

