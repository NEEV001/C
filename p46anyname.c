#include<stdio.h>
main()
{
	char letter;
	printf("\n enter letter=>");
	scanf("%c",&letter);

	if(letter=='A'||letter=='a')
	{
	printf("\n it's apple");	
	}
	else if(letter=='B'||letter=='b')
	{
	printf("\n it's ball");	
	}
	else if(letter=='c'||letter=='C')
	{
	printf("\n it's cat");	
	}
	else if (letter=='d'||letter=='D')
	{
	printf("\n it's dog");
	}
	else{
	printf("\n other");
	}
	
}
