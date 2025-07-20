#include<stdio.h>
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main() {

    int a=22,b=2;
    
    printf("\nbefore swap a=%d b=%d",a,b);
    
    swap(&a,&b);
    
    printf("\nafter swap a=%d b=%d",a,b);
    
    return 0;
}
