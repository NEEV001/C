#include<stdio.h>
main()
{
	int sno,eno,i,s=1;

	printf("\nEnter limit =>");
	scanf("%d",&eno);
	
	for(i=eno;i>=1;i--)
	{	
	printf(" %d * ",i);
	s=s*i;
	}
	printf("\n sum=%d",s);
}
