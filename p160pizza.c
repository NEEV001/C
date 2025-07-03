#include<stdio.h>
main()
{
	int pizza=0,dosa=0,sandwich=0,idli=0,qty;
	char option;
	do
	{
	printf("\npress p for pizza");
	printf("\npress d for dosa");
	printf("\npress s for sandwich");
	printf("\npress i for idli");
	printf("\npress e for exit ");
	printf("\nenter option=>");
	fflush(stdin);
	scanf("%c",&option);
	switch(option)
	{
		case 'p':
		printf("\n pizza price is 399");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		pizza=qty*399;
		printf("\n Your pizza bill=%d",pizza);
		break;
		case 'd':
		printf("\n dosa price is 199");
		printf("\nEnter Qty=>");
		scanf("%d",&qty);
		dosa=qty*199;
		printf("\n Your dosa bill=%d",dosa);

		break;
		case 's':
		printf("\n sandwich price is 250 ");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		sandwich=qty*250;
		printf("\n Your sandwich bill=%d",qty*250);
		break;
		case 'i':
		printf("\n idli price is 150");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		idli=qty*150;
		printf("\n Your idli bill=%d",qty*150);
		
		break;
		case 'e':
		printf("\n Bye");
		printf("\n Your Total bill=%d",pizza+dosa+sandwich+idli);
		break;
		default:
		printf("\nWrong opt");			
	}
      }while(option!='e');
}
