#include<stdio.h>
main()
{
	int pizza=0,dosa=0,sandwich=0,idli=0,option;
	int qty;
	do
	{
	printf("\npress 1 for pizza");
	printf("\npress 2 for dosa");
	printf("\npress 3 for sandwich");
	printf("\npress 4 for idli");
	printf("\npress 5 for exit");
	printf("\n Enter option=>");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		printf("\n pizza price is 399");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		pizza=qty*399;
		printf("\n Your pizza bill=%d",pizza);
		break;
		case 2:
		printf("\n dosa price is 199");
		printf("\nEnter Qty=>");
		scanf("%d",&qty);
		dosa=qty*199;
		printf("\n Your dosa bill=%d",dosa);

		break;
		case 3:
		printf("\n sandwich price is 250 ");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		sandwich=qty*250;
		printf("\n Your sandwich bill=%d",qty*250);
		break;
		case 4:
		printf("\n idli price is 150");
		printf("\nEnter qty=>");
		scanf("%d",&qty);
		idli=qty*150;
		printf("\n Your idli bill=%d",qty*150);
		
		break;
		case 5:
		printf("\n Bye");
		printf("\n Your Total bill=%d",pizza+dosa+sandwich+idli);
		break;
		default:
		printf("\nWrong opt");			
	}
      }while(option!=5);
}
