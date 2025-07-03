#include<stdio.h>
main()
{
	int a[100];
	int n;
	int m;
	int pos=0;
	int i;
	
	printf("\nenter the number of elements=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nenter element %d:",i+1);
	scanf("%d",&a[i]);
	
	m=a[0];
	if(m<a[i])
	pos=i;		
	}
	printf("\nmax=%d",m);
	printf("\npos=%d",pos);
	
	
}
