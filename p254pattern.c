#include<stdio.h>
main()
{
	int i,j,no,count=1;
	printf("\nenter limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	for(j=1;j<=i;j++)	
	{
		printf("%d",count);
		count++;
	}
	printf("\n");
}
}
