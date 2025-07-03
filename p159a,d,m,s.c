#include<stdio.h>
main()
{
	int no1,no2,sub,div,mul,add;
	char option;
	do
	{
	printf("\npress + for add");
	printf("\npress - for sub");
	printf("\npress / for div");
	printf("\npress * for mul");
	printf("\npress e for exit ");
	printf("\nenter option=>");
	fflush(stdin);
	scanf("%c",&option);
	switch(option)
	{
	case '+':
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	add=no1+no2;
	printf("\nAdd=%d",add);
	break;
	case '-':
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	sub=no1-no2;
	printf("\nsub=%d",sub);
	break;
	case '/':
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	div=no1/no2;
	printf("\ndiv=%d",div);
	break;	
	case '*':
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	mul=no1*no2;
	printf("\nmul=%d",mul);
	break;
	case 'e':
	printf("\nBye");
	break;
	default:
	printf("\nwrong opt");	
	}
    }while(option!='e');
	
}
