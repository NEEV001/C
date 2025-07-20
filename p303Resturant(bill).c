#include<stdio.h>
int main()
{
	float billamount,taxrate,tiprate;
	float taxamount,tipamount,totalamount,perperson;
	int people;
	printf("\nenter base bill amount:");    
	scanf("%f",&billamount);
	printf("\nenter tax rate:");     
	scanf("%f",&taxrate);
	printf("\nenter tip rate:");   
	scanf("%f",&tiprate);
	printf("\nenter number of people:");   
	scanf("%d",&people);
	
	taxamount=(taxrate/100)*billamount;
	tipamount=(tiprate/100)*billamount;
	totalamount=taxamount+tipamount+billamount;
	perperson=totalamount/people;
	
	printf("\ntotal=%.2f",totalamount);
	printf("\ntax=%.2f",taxamount);
	printf("\ntip=%.2f",tipamount);
	printf("\nperperson=%.2f",perperson);

	return 0;
	
}
