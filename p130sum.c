#include<stdio.h>
main()
{
	int no,i,m=1;

	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("%d * ",i);
		s=s*i;
	}
	printf("\n sum=%d",m);
}
