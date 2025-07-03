#include<stdio.h>
main()
{
	int no,i=1;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	
	while(i<=no)
	{
		if(i%2==0)
		{
		printf("\n%d even",i);
		i++;	
		}
		else
		{
		printf("\n%d odd",i);
		i++;
		}
	}
}
