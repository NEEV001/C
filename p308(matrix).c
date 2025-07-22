#include<stdio.h>
#define N 3	
int main()
{
	int i,j;
	int a[N][N];
	int b[N][N];
	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
	printf("\nenter number of a matrixa=>");
	scanf("%d",&a[i][j]);	
		}	
	}
	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
	printf("\nenter number of matrixb=>");
	scanf("%d",&b[i][j]);	
		}
	printf("\n");		
	}
	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
	printf("%d ",a[i][j]+b[i][j]);
		}
	printf("\n");		
	}
	
}
