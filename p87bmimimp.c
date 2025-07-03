#include<stdio.h>
main()
{
	float bmi;
	printf("\n enter bmi=>");
	scanf("%f",&bmi);
	if(bmi<18.5)
	{
	printf("\n underweight");	
	}
	else if(bmi>=18.5&&bmi<=24.9)
	{
	printf("\n normal");	
	}
	else if(bmi>=25&&bmi<=29.9)
	{
	printf("\n overweight");	
	}
	else if(bmi>30)
	{
	printf("\n obese");	
	}
	
}
