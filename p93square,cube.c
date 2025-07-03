#include<stdio.h>
main()
{
	int no1,square,cube;
	char option;
	printf("\npress s for square");
	printf("\npress c for cube");
	printf("\nenter option=>");
	scanf("%c",&option);
	switch(option)
	{
		case 's':
		case 'S':
		printf("\n enter no1=>");
		scanf("%d",&no1);	
		square=no1*no1;	
		printf("\n square=%d",square);
		break;
		case 'c':
		case 'C':
		printf("\n enter no1=>");
		scanf("%d",&no1);	
		cube=no1*no1*no1;
		printf("\n cube=%d",cube);
		break;	
		default:
		printf("\n wrong opt");
	}
}
