#include<stdio.h>
main()
{
	int sugarlevel;
	printf("\n enter sugarlevel=>");
	scanf("%d",&sugarlevel);
	if(sugarlevel>=80 &&sugarlevel<=100)
	{
	printf("\n sugarlevel is low");	
	}
	else if(sugarlevel>100)
	{
	printf("\n sugarlevel is high");		
	}
	else
	{
	printf("\n sugarlevel is normal");	
	}
}
