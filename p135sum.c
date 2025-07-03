#include<stdio.h>
main()
{
	int no,i,s=0;

	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
	if(i%2==0)	
	{
	printf("+%d ",i);
	s=s+i;
	}
	else
	{
	printf("-%d",i);
	s=s-i;	
	}
	}
	printf("\n Sum=%d",s);
}
