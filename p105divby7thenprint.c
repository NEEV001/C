#include<stdio.h>
main()
{
	int no,i;
	
	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(i%7==0)
		{
			printf("\n%d ",i);
		}
	}
}
