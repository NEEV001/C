 #include<stdio.h>
main()
{
	int mul,div,sub,add,option,no1,no2;
	do
	{
	printf("\npress 1 for div");
	printf("\npress 2 for mul");
	printf("\npress 3 for sub");
	printf("\npress 4 for add");
	printf("\npress 5 for exit");
	printf("\nEnter option=>");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	div=no1/no2;
	printf("\ndiv=%d",div);
	break;
	case 2:
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	mul=no1*no2;
	printf("\nmul=%d",mul);
	break;
	case 3:
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	div=no1-no2;
	printf("\nSub=%d",sub);
	break;
	case 4:
	printf("\nEnter no1=>");
	scanf("%d",&no1);	
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	add=no1+no2;
	printf("\nAdd=%d",add);
	break;
	case 5:
	printf("\nBye");
	break;
	default:
	printf("\nWrong opt");	
	}
    }while(option!=5);
}
