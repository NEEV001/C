#include<stdio.h>
main()
{
	int no,i,s=0;

	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("%d + ",i);
		s=s+i;
	}
	printf("\nSum = %d",s);
}
