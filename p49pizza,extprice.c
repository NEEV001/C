#include<stdio.h>
main()
{
	char letter;
	printf("\n enter letter=>");
	scanf("\%c",&letter);
	if(letter='d'||letter='D')
	{
	printf("\n dosa price is 200");	
	}
	else if(letter=='i'||letter=='I')
	{
	printf("\n idli price is 90");	
	}
	else if(letter=='p'||letter=='P')
{
	printf("\n pavbhaji price is 120");
}
    else
    {
    printf("\n other");	
	}
}
