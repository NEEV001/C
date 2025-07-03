#include<stdio.h>
#include<string.h>
main()
{
	char ch;
	char name[100]={"Neev"};
	int length=strlen(name);
	int i,uppercase=0,lowercase=0;
	for(i=0;i<length;i++)
	{
	ch=name[i];	
	if(isupper(ch))
	{
	uppercase++;	
		}
	else if(islower(ch))
	{
    lowercase++;
	printf("%c",ch);	
			}		
	}
}
