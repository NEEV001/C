#include<stdio.h>
main()
{
	FILE *f1;
	char ch;
	int i,uppercase=0,lowercase=0;
	int c=0;
	f1=fopen("abc1.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{	
		uppercase++;
		}
		else if(islower(ch))
		{
		lowercase++;	
			}	
	}
	printf("\nuppercase = %d", uppercase);
    printf("\nlowercase = %d", lowercase);

	fclose(f1);
}
