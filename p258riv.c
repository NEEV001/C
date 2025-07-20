#include<stdio.h>
main()
{
	int a[100]={12,21,45,54,78,99,123};
	int n=7,i;
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
