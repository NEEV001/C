#include<stdio.h>
main()
{
	int monthno;
	printf("\nenter monthno=>");
	scanf("%d",&monthno);
	switch(monthno)
	{
		case 1:
			printf("\njanuary");
			break;
		case 2:
			printf("\nfebruary");
			break;
			case 3:
			printf("\nmarch");
			break;
			case 4:
			printf("\napril");
			break;
			case 5:
			printf("\nmay");
			break;
			case 6:
			printf("\njune");
			break;
			case 7:
			printf("\njuly");
			break;
			case 8:
			printf("\naugust");
			break;
			case 9:
			printf("\nseptember");
			break;
			case 10:
			printf("\noctober");
			break;
			case 11:
			printf("\nnovember");
			break;
			case 12:
			printf("\ndecember");
			break;
			default:
			printf("\n wrong opt");
			break;	
	}
}
