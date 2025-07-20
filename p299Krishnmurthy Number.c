#include <stdio.h>
int main()
{
    int num, rem, s=0,i,j,f,c;
    printf("\nEnter num => ");
    scanf("%d", &num);
    c=num;  

    while (num!=0)
    {
        rem=num%10;  
        f=1;
        for(j = 1; j <= rem; j++)  
        {
        f = f * j;
        }
        s = s + f;  
        num = num / 10;  
    }
    if (s == c)
    {
        printf("\nKrishnamurthy number");
    }
    else
    {
        printf("\nNot a Krishnamurthy number");
    }

    return 0;
}

