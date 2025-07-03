#include<stdio.h>
main()
{
	int yearofservice,bonus,salary;
	printf("\nenter yearofservice=>");
	scanf("%d",&yearofservice);
	
	if(yearofservice>5)
	{
	printf("\nenter salary=>");
	scanf("%d",&salary);	
	bonus=salary*0.5;
	printf("\n bonus=%d",bonus);
	
	}
	else
	{
	printf("\n no bonus");	
	}
}
