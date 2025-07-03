#include<stdio.h>
main()
{
	FILE *f1;
	char ch;
	int c=0;
	f1=fopen("abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
		}
		else
		{
			printf("%c",ch);
		}
	}
	
	fclose(f1);
}
