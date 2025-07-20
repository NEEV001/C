#include<stdio.h>
main()
{	
	int i,j,no;
	printf("\nenter no=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	for(j=1;j<=i;j++)
	{
		printf(" ");
		}
	for(j=no;j>=i;j--)
	{
		printf("%d",j);
			}
			printf("\n");		
	}
}
