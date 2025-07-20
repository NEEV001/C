#include<stdio.h>
main()
{
	int eng,hindi,ss,maths,phy,total,percentage=0;
	printf("\nenter marks of eng-->");
	scanf("%d",&eng);
	printf("\nenter marks of ss-->");
	scanf("%d",&ss);
	printf("\nenter marks of hindi-->");
	scanf("%d",&hindi);
	printf("\nenter marks of maths-->");
	scanf("%d",&maths);
	printf("\nenter marks of phy-->");
	scanf("%d",&phy);
	
	total=eng+hindi+ss+maths+phy;
	printf("\ntotal=%d",total);
	
	percentage=(total*100)/500;
	printf("\npercentage=%d",percentage);
	
	if(percentage>45&&percentage<55)
	{
		printf("\n'F Grade'");
	}
	else if(percentage>=55&&percentage<65)
	{
	printf("\n'E Grade'");
	}
	else if(percentage>=65&&percentage<75)
	{
	printf("\n'C Grade'");
	}
	else if(percentage>=75&&percentage<85)
	{
	printf("\n'B Grade'");
	}
	else if(percentage>=85)
	{
	printf("\n'a Grade'");
	}
	else
	{
		printf("\nFail");
	}
}
