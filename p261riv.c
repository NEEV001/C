#include<stdio.h>
main()
{
	int a[100]={12,34,56,76,89,67,56};
	int n=7,i,search,c=0;
	printf("\nenter search-->");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
	if(a[i]==search)
	{
	c++;	
		}
	}
	if(c==0)
	{
	printf("\nnot found");	
		}
		else
		{
		printf("%d time",c);	
			}	
}
