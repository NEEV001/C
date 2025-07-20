#include<stdio.h>
main()
{
	int i,no,m=1;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	
	
	for(i=1;i<=no;i++)
	{
	printf("%d *",i);
	m=m*i;	
	}
	printf("\nmul=%d",m);
}
