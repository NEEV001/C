#include<stdio.h>
main()
{
	int no,divnumber,i;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	printf("\nEnter divnumber=>");
	scanf("%d",&divnumber);
	for(i=1;i<=no;i++)
	{
	if(i%divnumber==0)
	{
	printf("\n %d",i);	
		}	
	}
}
	
	
