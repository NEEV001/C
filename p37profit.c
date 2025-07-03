#include<stdio.h>
main()
{
	int buyingcost,sellingcost;
	printf("\n Enter buyingcost=>");
	scanf("%d",&buyingcost);
	printf("\n Enter sellingcost=>");
	scanf("%d",&sellingcost);
	if(buyingcost<sellingcost)
	{
	printf("\n you have profit");	
	}
	else{
	printf("\n you have loss");	
	}
	
}
