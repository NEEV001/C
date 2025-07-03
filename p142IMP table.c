#include<stdio.h>
main()
{
	int no,i=1;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	
	
	while(i<=no)
	{
		printf("\n%d X %d= %d ",no,i,no*i);
		i++;
	}
}
