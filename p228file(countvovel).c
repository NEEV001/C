#include<stdio.h>
main()
{
	FILE *f1;
	char ch;
	
	int c=0;
	f1=fopen("abc1.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
		if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{	
		c++;
		}	
	}
	printf("\ncountvovel=%d",c);
	fclose(f1);
}
