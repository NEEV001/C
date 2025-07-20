#include<stdio.h>
int main()
{
	int num,rem,rev,c;
	rev=0;
	printf("\nenter num=>");
	scanf("%d",&num);
	c=num;
	while(num!=0)
	{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
    }
      
    printf("\nnum=%d rev=%d",rev,c);
      
	if(c==rev)
	{
	printf("\npalindrome num");	
	}
	else
	{
	printf("\nnot a palindrome num");		
	}	
	return 0;
}
