#include<stdio.h>
main()
{
	int i,no;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	i=1;
	do
	{
	printf("\n%d X %d=%d ",no,i,no*i);
	i++;
}
	while(i<=no);

}
