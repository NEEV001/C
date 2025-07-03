#include<stdio.h>
main()
{
	int no1,square,cube,option;
	printf("\press 1 for square");
	printf("\npress 2 for cube");
	printf("\nenter option=>");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		printf("\n enter no1=>");
		scanf("%d",&no1);	
		square=no1*no1;	
		printf("\n square=%d",square);
		break;
		case 2:
		printf("\n enter no1=>");
		scanf("%d",&no1);	
		cube=no1*no1*no1;
		printf("\n cube=%d",cube);
		break;	
		default:
		printf("\n wrong opt");
				
	}
}
