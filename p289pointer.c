#include <stdio.h>
int main() {

    int a[5]={11,2,3,4,5};
    int i,*ptr;
    
    ptr=a;
    
    for(i=0;i<5;i++)
    {
        printf("\n%d ",*ptr);
        ptr++;
    }
    
    
    return 0;
}
