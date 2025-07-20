#include<stdio.h>
main()
{
	FILE *f1,*f2;
	char ch;
	int i,uppercase=0,lowercase=0;
	int c=0;
	f1=fopen("abc1.txt","r");
	f2=fopen("pqr.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{	
		
		}
		else if(islower(ch))
		{
		putc(ch,f2);	
			}	
	}


	fclose(f1);
	fclose(f2);
	
	printf("\ncopied");
}

