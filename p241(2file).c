#include<stdio.h>
#include<ctype.h>
main()
{
	FILE *f1,*f2,*f3;
	char ch1,ch2;
	f1=fopen("abc1.txt","r");
	f2=fopen("pqr.txt","r");
	f3=fopen("bnm.txt","w");
	while(ch1!=EOF)
	{
		ch1=getc(f1);
		putc(ch1,f3);
	}
	while(ch2!=EOF)
	{
	ch2=getc(f2);
	putc(ch2,f3);	
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	printf("copied");
}
