#include<stdio.h>
void add()
{
	
	int a,b;
	printf("\nEnter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d ",a+b);
}
void max2()
{
	int a,b;
	printf("\nenter 2nos=>");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	printf("\n no1 is greater");	
	}
	else
	{
	printf("\n no2 is greater");	
	}
}
void square()
{
	int no1,square;
	printf("\nenter no1=>");
	scanf("%d",&no1);
	square=no1*no1;
	printf("\nsquare=%d",square);
}
void table()
{
	
	int no,i=1;
	printf("\nEnter limit=>");
	scanf("%d",&no);
	
	
	while(i<=no)
	{
		printf("\n%d X %d= %d ",no,i,no*i);
		i++;
	}
}
void oddeven()
{
	int no1;
	printf("\nEnter no1=>");
	scanf("%d",&no1);
	if(no1%2==0)
	{
	printf("\n even");	
	}
	else
	{
	printf("\n odd");	
	}
}
void posneg()
{
 
    int no1;
	printf("\nEnter no1=>");
	scanf("%d",&no1);
	if(no1<0)
	{
	printf("\n neg");	
	}
	else
	{
	printf("\n pos");
}
}
void max3()
{
	int a,b,c;
	printf("\nenter 3nos=>");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
	printf("\n no1 is greater");	
	}
	else if(b>c&&b>a)
	{
	printf("\n no2 is greater");	
	}
	else
	{
	printf("\n no3 is greater");	
	}	
}
void fact()
{
	int i,no;
	printf("\nenter limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("%d * ",i);
	}
}
void areaoftri()
{
	float height,base,area;
	printf("\nenter height=>");
	scanf("%f",&height);
	printf("\nenter base=>");
	scanf("%f",&base);
	area=height*base*0.5;
	printf("\n area=%.2f",area);
}
void areaofcircle()
{
	float radius,area;
	printf("\nenter radius=>");
	scanf("%f",&radius);
	area=radius*radius*3.14;
	printf("\narea=%.2f",area);
}
main()
{
add();
max2();	
square();
table();
oddeven();
posneg();
max3();
fact();
areaoftri();
areaofcircle();
}
