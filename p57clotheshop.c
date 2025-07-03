#include<stdio.h>
main()
{
	char letter;
	int qty;
	printf("\n welcome to neev clothe wear");
	printf("\n press s for shirt");
	printf("\n press j for jeans");
	printf("\n enter letter=>");
	scanf("%c",&letter);
	fflush(stdin);
	
	if(letter=='s'||letter=='S')
	{
	printf("\n shirt price is 2000");
	printf("\n enter qty=>");
	printf("%d",&qty);	
	printf("\n your shirt bill=%d",qty*2000);
	}
	else if(letter=='j'||letter=='J')
	{
	printf("\n shirt price is 3000");
	printf("\n enter qty=>");
	printf("%d",&qty);	
	printf("\n your jeans bill=%d",qty*3000);	
	}
	
}
