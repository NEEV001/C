#include<stdio.h>
#define N 3
int main()
{
	int m[N][N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
	printf("\nenter number:");
	scanf("%d",&m[i][j]);	
		}	
	}
	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
	printf("% d ",m[i][j]);
		}
		printf("\n");	
	}	
	return 0;
	
}
