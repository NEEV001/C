#include<stdio.h>
main()
{
	int ss,maths,eng,marks,total;
	printf("\n enter the marks of ss=>");
	scanf("%d",&ss);
	printf("\n enter the marks of eng=>");
	scanf("%d",&eng);
	printf("\n enter the marks of maths=>");
	scanf("%d",&maths);
	total=ss+maths+eng;
	
	if(total>50)
	{
	printf("\n pass");
}
else{
	printf("\n fail");
}

	
	
}
