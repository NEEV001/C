#include<stdio.h>
main()
{
	float no,i,s=0;

	printf("\nEnter limit =>");
	scanf("%f",&no);
	
	for(i=1;i<=no;i++)
	{
	printf(" 1/%.f+ ",i);	
	s=1/i;
	}
	printf("\n Sum=%.2f",s);
}
