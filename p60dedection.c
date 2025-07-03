#include<stdio.h>
main()
{
	int salary,dedection,don;
	printf("\n enter salary=>");
	scanf("%d",&salary);
	don=salary*0.10;
	dedection=salary-don;
	printf("\n your donation is %d",don);
	printf("\nnow your salary %d",dedection);
	
}
