#include<stdio.h>
main()
{
	int no,i;

	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
	if(i%2==1)
	{
	printf("%d +",i);	
		}	
	}
}
