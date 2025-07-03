#include<stdio.h>
main()
{
	char letter;
	printf("\n press a for ahmedabad");
	printf("\n press m for mumbai");
	printf("\n press k for kerla");
	printf("\n enter letter=>");
	scanf("%c",&letter);
	if(letter=='a'||letter=='A')
	{
	printf("\n ahmedabad population is 120crore");	
	}
	else if(letter=='m'||letter=='M')
	{
	printf("\n mumbai is very big");	
	}
	else if(letter=='k'||letter=='K')
	{
	printf("\n kerla is beautifull city");	
	}
	else
	{
	printf("\n i don't no")	;
	}
}
