#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
{
	char ch;
    char name[100] = {"My Name Is Neev"};
    int length = strlen(name);  
    int i;

    for (i=0;i<length;i++) 
    {
        if (isupper(name[i])) 
        {
             printf("%c",tolower(name[i]));
        }
        else if (islower(name[i])) 
        {
            printf("%c",toupper(name[i]));
        }
        else
        {
        	printf("%c",name[i]);
		}
    //printf("sentence=%s",name);
}
}
