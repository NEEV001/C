#include<stdio.h>
#include<string.h>
main()
{
	char ch;
	char name[100]={"my name is neev"};
	int length=strlen(name);
	int i;
	for(i=0;i<length;i++)
	{
	ch=name[i];
	printf("\n %c",ch);	
	}
}
