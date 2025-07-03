#include<stdio.h>
main()
{
	int s,c,no1;
	char letter;
	
	printf("\n press c for cube");
	printf("\n press s for square");
	printf("\n enter  letter =>");
	scanf("%c",&letter);
	if(letter=='s'||letter=='S')
	{	
	printf("\n enter  no1=>");
	scanf("%d",&no1);
	s=no1*no1;
	printf("\n square = %d",s);	
	}
	else if(letter=='c'||letter=='C')
	{
	printf("\n enter no1=>");
	scanf("%d",&no1);
	c=no1*no1*no1;	
	printf("\n cube= %d",c);	
		}	
	
}
