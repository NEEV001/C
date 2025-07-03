#include<stdio.h>
main()
{
	int i,no;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	i=1;
	do
	{
	printf("\n %d %d",i,i*i);
	i++;	
	}
	while(i<=no);

}
