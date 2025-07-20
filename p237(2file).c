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
		
		if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')

		{
			
		}
		else
		{
		putc(ch,f2);
	}
}
	fclose(f1);
	fclose(f2);
	
	printf("\ncopied");
}
