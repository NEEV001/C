#include <stdio.h>

int main() {

    int a=20;
    int *b;
    b=&a;
    
    printf("\na = %d *b= %d",a,*b);
    
    *b=100;
    
    printf("\na = %d *b= %d",a,*b);
    
    a=90;
    
    printf("\na = %d *b= %d",a,*b);
    
    
    return 0;
}
