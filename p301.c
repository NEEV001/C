#include<stdio.h>
main()
{
    int i,j, sno, eno, no, c;

    printf("\nEnter sno=>");
    scanf("%d", &sno);

    printf("\nEnter eno=>");
    scanf("%d",&eno);

    for(no=sno;no<=eno;no++)
    {
        c=0;
        
        for(i = 2; i < no; i++)
        {
            if(no % i == 0)
            {
                c = 1;
                break;
            }
        }

        if(c == 0)
        {
            printf("\n%d", no);
        }
    }

    return 0;
}
