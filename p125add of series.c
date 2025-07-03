#include<stdio.h>
main()
{
	int no,i;

	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=2;i<=no;i=i+2)
	{	
	printf(" %d ",i);
	}
}
