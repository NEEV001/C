#include<stdio.h>
main()
{
	int xerox=0,typing=0,option,pages;
	do
	{
	printf("\npress 1 for xerox");
	printf("\npress 2 for typing");
	printf("\npress 3 for exit");
	printf("\nEnter option=>");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
	printf("\nEnter pages for xerox=>");
	scanf("%d",&pages);
	xerox=pages*2;
	printf("\n xerox bill=%d",xerox);
	break;
	case 2:
	printf("\nEnter pages for typing=>");
	scanf("%d",&pages);
	typing=pages*3;
	printf("\n typing bill=%d",typing);
	break;	
	case 3:
	printf("\nBye");
	printf("\nyour total bill=%d",xerox+typing);
	break;
	default:
	printf("\nwrong opt");		
	}
   }while(option!=3);
}
