#include<stdio.h>
main()
{
	int i,j,no;
	printf("\nenter limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	for(j=1;j<=i;j++)	
	{
		printf("%d",j);
	}
	printf("\n");
}
}
