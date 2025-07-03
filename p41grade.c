#include<stdio.h>
main()
{
	int ss,eng,maths,total;
	
	printf("\n Enter marks of ss=>");
	scanf("%d",&ss);
	printf("\n Enter marks of maths=>");
	scanf("%d",&maths);
	printf("\n Enter marks of eng=>");
	scanf("%d",&eng);
	total=eng+maths+ss;
	if(total>0&& total<50)
	{
	printf("\nc grade");
}
	else if(total>50&&total<100)
{
	printf("\nb grade");
	
	}
	else
	{
		printf("\na grade");
	}
}
	
	

