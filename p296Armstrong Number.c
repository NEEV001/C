#include<stdio.h>
int main()
{
	int rem,num,s,c;
	s=0;
	printf("\nenter num=>");
	scanf("%d",&num);
	c=num;
	while(num!=0)
	{
	rem=num%10;
	s=s+rem*rem*rem;
	num=num/10;
	}
	if(s==c)
	{
	printf("\nit's armstrong num");	
	}
	else
	{
	printf("\nit s'not a armstrong num");	
	}
	return 0;
}
