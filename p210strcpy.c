#include <stdio.h>
#include<string.h>
int main()
{
    char n1[100] = {"shah"};
    char n2[100] = {"neev"};
    printf("\nN1 = %s", n1);
    printf("\nN2 = %s", n2);
	strcpy(n1,n2);
	printf("\nN1 = %s", n1);
    printf("\nN2 = %s", n2);
    
}

