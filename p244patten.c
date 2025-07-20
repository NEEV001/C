#include<stdio.h>
main()
{
	int i,no,j;
	printf("\nenter limit=>");
	scanf("%d",&no);
	for(i=1;i<=4;i++) //1
	{
		for(j=1;j<=no;j++) //1234
		{
			printf("*");	
		}	
		printf("\n");
	}
}
