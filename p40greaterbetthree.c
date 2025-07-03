#include<stdio.h>
main()
{
	int one,two,three;
	printf("\n Enter the value of one=>");
	scanf("%d",&one);
	printf("\n Enter the value of two=>");
	scanf("%d",&two);
	printf("\n Enter the value of three=>");
	scanf("%d",&three);
	
	if(one>two&&one>three)
	{
	printf("\n one is greater");	
	}
	else if(two>three&&two>one)
	{
	printf("\n two is greater");		
	}
	else
	{
	printf("\n three is greater");	
	}
		
	}
	



