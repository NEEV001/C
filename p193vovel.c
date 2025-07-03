#include<stdio.h>
#include<string.h>
main()
{
	char ch;
	char name[100]={"my name is neev"};
	int length=strlen(name);
	int c=0;
	int i;
	for(i=0;i<length;i++)
	 {
		ch=name[i];
		if(ch=='e' || ch=='E'||ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='U'||ch=='u')
		{
			c++;	
		}
	}
	printf("\nvovel=%d",c);     

}
