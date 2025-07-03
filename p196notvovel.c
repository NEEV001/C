#include<stdio.h>
#include<string.h>
main()
{
	char ch;
	char name[100];
	
	printf("\nEnter name ->");
	gets(name);
	
	int length=strlen(name);
	int i;
	for(i=0;i<length;i++)
	{
	ch=name[i];
	
	if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		}
	else{
		printf("%c",ch);	
	
	}	
	}
}

