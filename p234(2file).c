#include<stdio.h>
#include<ctype.h>
main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("abc1.txt","r");
	f2=fopen("pqr.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		putc(ch,f2);
	}
	fclose(f1);
	fclose(f2);
	
	printf("copied");
}
