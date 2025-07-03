#include<stdio.h>
main()
{
	char ch;
	printf("\nEnter operator =>");
	scanf("%c",&ch);

	if(ch=='+')
	{
	printf("\n it's plus");	
	}
	else if(ch=='-')
	{
		printf("\n it's minus");
	}
	else if(ch=='*')
	{
		printf("\n it's mul");
	}
	else if(ch=='/')
	{
		printf("\n it's divison");
	}
	else
	{
		printf("\n Other");
	}
	
	
}
