#include<stdio.h>
main()
{
	char ch;
	printf("\n enter ch=>");
	scanf("%c",&ch);
	printf("\n ch=%c",ch);
	if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
	printf("\n it'vovel");	
	}
	else{
	printf("\n it's other");
	}
}
