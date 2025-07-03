#include <stdio.h>
#include<string.h>
int main()
{
    char n1[100] = {"shah"};
    char n2[100] = {"neev"};
    printf("\n%s", n1);
    printf("\n%s", n2);
	strcat(n1,n2);
	printf("\n%s", n1);
    printf("\n%s", n2);
    
}
