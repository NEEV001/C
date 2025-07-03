#include<stdio.h>
main()
{
	int square,cube,no,option;
	do
	{
	printf("\npress 1 for square");
	printf("\npress 2 for cube");
	printf("\npress 3 for exit");
	printf("\nEnter option=>");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
	printf("\nEnter no=>");
	scanf("%d",&no);
	square=no*no;
	printf("\n square=%d",square);
	break;	
	
	case 2:
	
	printf("\nEnter no=>");
	scanf("%d",&no);
	cube=no*no*no;
	printf("\n cube=%d",cube);
	break; 
           case 3:
			printf("\nbye");
			break;
			default:
			printf("\nwrong opt");
		}
	}while(option!=3);
	
	
}
