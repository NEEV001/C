#include<stdio.h>
main()
{
	char letter;
	printf("\nenter letter=>");
	scanf("%c",&letter);
	switch(letter)
	{
	case 'a':
	case 'A':	
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'o':
	case 'O':
	case 'U':
	case 'u':
	printf("\n it's vovel");
	break;
	default:
	printf("\n wrong opt");
}
}
