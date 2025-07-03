#include<stdio.h>
main()
{
	int dayno;
	
	printf("\nenter dayno=>");
	scanf("%d",&dayno);
	switch(dayno)
	{
		    case 1:
			printf("\nMonday");
			break;
		    case 2:
            printf("\nTuesday");
			break;		
	         case 3:
			printf("\nwednesday");
			break;
			case 4:
			printf("\nthursday");
			break;
			case 5:
			printf("\nfriday");
			break;
			case 6:
			printf("\nsaturday");
			break;
			case 7:
			printf("\nsunday");	
			break;
			
			default:
			printf("\nWrong opt");
			break;
	}
	
}
