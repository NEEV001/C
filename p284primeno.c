#include<stdio.h>
main()
{
	int i,no,count=0;
	printf("\nenter no=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	if(no%i==0)
	{
	count++;	
		}
}
	 if(count==2)
	 {
	 	printf("\n%d is prime no",no);
	 	 }		
	else
	{
		printf("\n%d is not a prime no",no);
	}
}
