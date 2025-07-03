#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char ch; 
    char name[100];
    printf("\nenter name->");
    gets(name);
    
	int length=strlen(name);
	int i,lower=0,upper=0;
	for(i=0;i<length;i++)
	{
	ch=name[i];
	if(i%2==0)
	{
	
	printf("%c",toupper(ch));
		}
	else 
	{
	printf("%c",tolower(ch));	
			}		
	}
}
