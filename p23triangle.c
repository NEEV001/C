#include<stdio.h>
main()
{
	float height,base,area;
	printf("\n Enter height=> ");
	scanf("%f",&height);
	printf("\n Enter base=> ");
	scanf("%f",&base);
	
	
	area=height*base*0.5;
	printf("\n area=%.2f",area);
}
