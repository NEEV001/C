#include<stdio.h>
main()
{
	int a[100]={12,23,45,67,87,97,676,111};
	int n=8,i;
	int max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
	if(max<a[i])
	{
	max=a[i];	
		}
	else if(min>a[i])
	{
	min=a[i];	
			}		
	}
	printf("\nmax=%d",max);
	printf("\nmin=%d",min);
}
