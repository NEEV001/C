#include<stdio.h>
main()
{
	int a[100]={12,32,33,12,35,65,12,23,12,99};
	int i,n=10;
	int m=a[0];
	for(i=0;i<n;i++)
	{
	if(m>a[i])
	{
	m=a[i];	
	}	
	}
	printf("\nmin=%d",m);
}
