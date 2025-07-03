#include<stdio.h>
main()
{
	int no,i=1;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	
	while(i<=no)
	{
		printf("\n %d %d ",i ,i*i);
		i++;
	}
}
