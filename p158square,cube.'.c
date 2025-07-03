#include<stdio.h>
main()
{
	char ch;
	int square,cube,no,option;
	do
	{
	printf("\npress s for square");
	printf("\npress c for cube");
	printf("\npress e for exit");
	printf("\nEnter option=>");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='S'||ch=='s')
	{
	printf("\nEnter no=>");
	scanf("%d",&no);
	square=no*no;
	printf("\n square=%d",square);
	}
	else if(ch=='c'||ch=='C')
	{
	printf("\nEnter no=>");
	scanf("%d",&no);
	cube=no*no;
	printf("\n cube=%d",cube);	
	}
	else if(ch=='e'||ch=='E')
	{
	printf("\n exit");	
	}
	else
	{
	printf("\n wrong opt");	
	}
    }while(option!='e');
}
