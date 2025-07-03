#include<stdio.h>
main()
{
	int no,i=1,f=1;

	printf("\nEnter limit =>");
	scanf("%d",&no);
	i=no;
	while(i>=1)
	{	
	printf(" %d * ",i);
	f=f*i;
	i--;
	}
	printf("\nSum=%d",f);
	
}

