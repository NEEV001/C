#include<stdio.h>
#include<ctype.h>
main()
{
	FILE *f1;
	char ch;
	int i,touppercase=0,tolowercase=0;
	f1=fopen("abc1.txt","r");
	int c=1;
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(c%2==0)
		{	
		printf("%c",toupper(ch));
		}
		else if(c%1==0)
		{
		printf("%c",tolower(ch));
			}
			c++;	
	}

	fclose(f1);
}
