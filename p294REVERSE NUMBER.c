#include<stdio.h>
int main()
{
	int num,rev,rem,no;
	rev=0;
	printf("\nenter num=>");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;	
	}
	printf("%d",rev);
	return 0;
	
}
