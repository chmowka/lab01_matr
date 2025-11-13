#include <stdio.h>
#include <stdlib.h>

int main() {
    int M = 6;
    int A[6][6];
    
    
    printf("MATRITZA %dx%d  \n", M, M);
    for(int i = 0; i < M; i+=1) {
        for(int j = 0; j < M; j+=1) {
            A[i][j] = 0+rand() %11 ;
        }
    }
    
    printf("\n MATRITZA :\n");
    for(int i = 0; i < M; i+=1) {
        for(int j = 0; j < M; j+=1) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < M; i+=1) {
        for(int j = 0; j < M; j+=1) {
            if(j >= i) {  
                A[i][j] = 0;
            }
        }
    }
    
    
    printf("\n Izmenennaya matritza \n");
    for(int i = 0; i < M; i+=1) {
        for(int j = 0; j < M; j+=1) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}