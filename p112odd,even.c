#include<stdio.h>
main()
{
	int no,i;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	if(i%2==0)
	{
	printf("\n %d even",i);	
		}
	else
	{
	printf("\n %d odd",i);	
			}		
	}
}
