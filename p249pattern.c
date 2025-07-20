#include<stdio.h>
main()
{
	int i,no,j;
	printf("\nenter limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++) //1
	{
		for(j=1;j<=no;j++) //1234 
		
		{
			printf("%d",j%2);	
		}	
		printf("\n");
	}
}
