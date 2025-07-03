#include<stdio.h>
main()
{
	int price,discount;
	printf("\nenter price=>");
	scanf("%d",&price);
	if(price>10000)
	{
	discount=price*0.20;
	printf("\n discount=%d",discount);
	
	}
	else if(price>7000&&price<10000)
	{
	discount=price*0.15;
	printf("\n discount=%d",discount);
	
	}
	else if(price>7000)
	{
	discount=price*0.10;	
	printf("\n discount=%d",discount);
		
	}
}
