#include<stdio.h>
main()
{
	int num,s=0;
	printf("\nenter num=>");
	scanf("%d",&num);
	while(num!=0)
	{
	s=s+(num%10);
	num=num/10;	
	}
	printf("\nsum=%d",s);
}
