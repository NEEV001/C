#include<stdio.h>
int main()
{
	int hours,minutes,seconds;
	printf("\nenter total seconds:");
	scanf("%d",&seconds);
	hours=seconds/3600;
	minutes=(seconds%3600)/60;
	seconds=seconds%60;
	printf("\nhours=%d:minutes=%d:seconds=%d",hours,minutes,seconds);
}
