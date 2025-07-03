#include<stdio.h>
main()
{
	FILE *f1;
	char ch;
	int i,uppercase=0,lowercase=0;
	f1=fopen("abc1.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{	
		}
		else if(islower(ch))
		{
		printf("%c",ch);	
			}	
	}
	
	fclose(f1);
}
