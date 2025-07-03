#include<stdio.h>
main()
{
	int number1,number2;
	printf("\n enter number1=>");
	scanf("%d",&number1);
	printf("\n enter number2=>");
	scanf("%d",&number2);
	
	number1>number2 ? printf("number1 is greater") : printf("number2 is greater");
}
