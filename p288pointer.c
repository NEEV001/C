#include <stdio.h>

int main() {

    int a=20,b=2;
    int *ptra,*ptrb;
    ptra=&a;
    ptrb=&b;
    
    printf("\nadd = %d",*ptra + *ptrb);
    printf("\nsub = %d",*ptra - *ptrb);
    
    
    return 0;
}
