#include<stdio.h>
main()
{
	int square,cube,no,option;
	printf("\npress 1 for square");
	printf("\npress 2 for cube");
	printf("\nEnter option=>");
	scanf("%d",&option);
	if(option==1)
	{
	printf("\nEnter no=>");
	scanf("%d",&no);
	square=no*no;
	printf("\n square=%d",square);	
	}
	else if(option==2)
	{
	printf("\nEnter no=>");
	scanf("%d",&no);
	cube=no*no*no;
	printf("\n cube=%d",cube);
	}
		
	
	
}
