#include<stdio.h>
int main()
{
    int phy,chemistry,maths,eng,com;
    int total;
    float percentage;

    printf("Enter marks of phy=> ");
    scanf("%d", &phy);
    printf("Enter marks of chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks of maths ");
    scanf("%d", &maths);
    printf("Enter marks of eng ");
    scanf("%d", &eng);
    printf("Enter marks of com: ");
    scanf("%d", &com);

    
    total = phy + chemistry + maths + eng + com;
    percentage = total / 5;

    printf("\nTotal = %d", total);
    printf("\nPercentage=%f", percentage);

    if (percentage>= 90)
    {
        printf("\nGrade: A");
    }
     else if (percentage >= 80)
	 { 
        printf("\nGrade: B");
    }
     else if (percentage >= 70) 
     {
        printf("\nGrade: C");
    }
     else if (percentage >= 60)
	 { 
        printf("\nGrade: D");
    }
     else if (percentage >= 50)
	 { 
        printf("\nGrade: E");
    }
     else
     {
        printf("\nGrade: F");
    }   
}
