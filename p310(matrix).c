#include<stdio.h> 
#define N 3 
int main()  
{ 
    int a[N][N]; 
    int b[N][N]; 
    int product[N][N]; 
    int i, j, k, s = 0; 
 
 
 
    for(i = 0; i < N; i++) 
    { 
        for(j = 0; j < N; j++) 
        { 
            printf("\n Enter Value for A mat=>"); 
            scanf("%d", &a[i][j]); 
        } 
    } 
    for(i = 0; i < N; i++) 
    { 
        for(j = 0; j < N; j++) 
        { 
            printf("\n Enter Value for B mat=>"); 
            scanf("%d", &b[i][j]); 
        } 
    } 
  
 
    for(i = 0; i< N; i++) 
    { 
        for(j = 0; j < N; j++) 
        { 
            s = 0;
            for(k = 0; k< N; k++)  
            { 
                s=s+a[i][k]*b[k][j]; 
            } 
            product[i][j]=s; 
        } 
    } 
 
     
 
    for(i = 0; i < N; i++) 
    { 
        for(j = 0; j < N; j++) 
        { 
            printf("%d ", product[i][j]); 
        } 
        printf("\n "); 
    } 

    return 0;
}
