#include<stdio.h>
main()
{
	int no,i;
	printf("\nEnter no of table=>");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
	printf("\n %d X %d=%d",no,i,no*i);	
	}
}
