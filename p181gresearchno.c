#include<stdio.h>
main()
{
	int a[100]={12,23,43,1,34,45,23,12,13,14};
	int c=0,n=10;
	int search,i;
	printf("\n enter search=>");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]>search)
		{
		
	printf("\n %d",a[i]);
}
}
}
