#include<stdio.h>
int main()
{
	float distance,fuelused,priceperlitre;
	float toll,parking;
	float fuelefficiency, fuelcost, totalcost, costperkm;
	printf("\nenter travelled distance:");
	scanf("%f",&distance);
	printf("\nenter used fuel");
	scanf("%f",&fuelused);
	printf("\nenter price for per litre:");
	scanf("%f",&priceperlitre);
	printf("\nenter toll charges:");
	scanf("%f",&toll);
	printf("\nenter parking charges:");
	scanf("%f",&parking);
	
	fuelefficiency=distance/fuelused;
	fuelcost=fuelused*priceperlitre;
	totalcost=fuelcost+toll+parking;
	costperkm=totalcost/distance;
	
	printf("\nfuelefficiency=%.2f",fuelefficiency);
	printf("\nfuelcost=%.2f",fuelcost);
	printf("\ntotalcost=%.2f",totalcost);
	printf("\ncostperkm=%.2f",costperkm);
	
	return 0;
}
