#include<stdio.h>
main()
{
int a[100]={12,23,43,1,34,45,23,12,13,14};

	int c=0,n=10;
	int i;
	for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
	
}
     printf("\n");
    for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
	printf(" e ",a[i]);
    }
    else
    {
	printf(" o ",a[i]);
    }
}
}

