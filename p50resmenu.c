#include<stdio.h>
main()
{
	char ch;
	int qty;
	printf("\nWelcome to Khushi Resturant");
	printf("\n press p for pizza");
	printf("\n press b for burger");
	printf("\n press d for dhosa"); 
	printf("\n enter the option");
	scanf("%c",&ch);
	if(ch=='p'||ch=='P')
	{
		printf("\npizza price is 200");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		printf("\n your pizza bill=%d",qty*200);
	}
	else if(ch=='b'||ch=='B')
	{
	printf("\nBurger price is 250");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		printf("\n your burger bill=%d",qty*250);	
	}
	else if(ch=='d'||ch=='D')
{

        printf("\ndhosa price is 300");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		printf("\n your dhosa bill=%d",qty*300);
	}
	else
	{
		printf("\n we don't serve'");
	}
}
		
