#include<stdio.h>
main()
{
	int no;
	printf("\nenter no=>");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("%d even",no);
	}
	else
	{
		printf("%d odd",no);
	}
}
