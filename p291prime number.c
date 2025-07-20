#include<stdio.h>
main()
{
    int i,no,c=0;
    printf("\nEnter range of no=>");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
        	c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("\n%d is not a prime number",no);
    }
    else
    {   
        printf("\n%d is prime number",no);
    }
}
