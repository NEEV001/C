#include<stdio.h>
main()
{	
	int i,j,no;
	printf("\nenter no=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	for(j=no;j>=i;j--)
	{
		printf(" ");
		}
	for(j=1;j<=i;j++)
	{
		printf("* ");
			}
			printf("\n");		
	}
	for(i=1;i<=no;i++) 
	{
		for(j=1;j<=4;j++) 
		{
			printf(" * ");	
		}	
		printf("\n");
	}
}
