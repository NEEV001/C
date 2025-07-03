#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char name[100];
	char ch;
	int i;
	
	printf("\nenter name ->");
	scanf("%s",name);
	
	int length=strlen(name);
	for(i=0;i<length;i++)
	{
	ch=name[i];	
	if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
	printf("7");
	
	  }
	 else
	 {
	 printf("%c",ch);	
	  } 
	}
	
}
