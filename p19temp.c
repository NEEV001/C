#include<stdio.h>
main()
{
	int monday,tuesday,wednesday,thursday,friday,total;
	printf("\n Enter temprature of monday=>");
	scanf("%d",&monday);
	printf("\n Enter temprature of tuesday=>");
	scanf("%d",&tuesday);
	printf("\n Enter temprature of wednesday=>");
	scanf("%d",&wednesday);
	printf("\n Enter temprature of thursday=>");
	scanf("%d",&thursday);
	printf("\n Enter temprature of friday=>");
	scanf("%d",&friday);
	
	total=monday+tuesday+wednesday+thursday+friday;
	printf("\n total= %d",total);
}
