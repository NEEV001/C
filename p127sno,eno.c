#include<stdio.h>
main()
{
	int sno,eno,i;

	printf("\nEnter staring =>");
	scanf("%d",&sno);
	
	printf("\nEnter limit =>");
	scanf("%d",&eno);
	
	for(i=sno;i<=eno;i++)
	{	
	printf(" %d ",i);
	}
}
