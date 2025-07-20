#include<stdio.h>
int main()
{
	int bd,bm,by;
	int cd,cm,cy;
	printf("\nenter Birth(DD//MM/YYYY):");
	scanf("%d %d %d",&bd,&bm,&by);
	printf("\nenter Current(DD/MM/YYYY):");
	scanf("%d %d %d",&cd,&cm,&cy);
	int days,months,years;
	
	if(cd>=bd)
	{
	days=cd-bd;	
	}
	else
	{
	cd=cd+30;
	cm=cm-1;
	days=cd-bd;	
	}
	if(cm>=bm)
	{
	months=cm-bm;	
	}
	else
	{
	cm=cm+12;
	cy=cy-1;
	months=cm-bm;	
	}
	years=cy-by;
	int totaldays=years*365+months*30+days;
	
	printf("\nYou are %d years, %d months, and %d days old.\n", years, months, days);
    printf("Total days (approx): %d\n", totaldays);
	
	return 0;
}
