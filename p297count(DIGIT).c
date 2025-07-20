#include<stdio.h>
main()
{
	int num,count=0;
	printf("\nenter num=>");
	scanf("%d",&num);
	while(num!=0)
	{
	num=num/10;
	count=count+1;// count++ // count+=1	
	}
	printf("%d",count);
}
