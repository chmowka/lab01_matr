#include <stdio.h>
#include <stdlib.h>

int main() {
    int M = 4, N = 5;
    int A[4][5];
    
    printf("Matritza %dx%d \n", M, N);
    for(int i = 0; i < M; i+=1) {
        for(int j = 0; j < N; j+=1) {
            A[i][j] = 0+rand() %11 ;
        }
    }
    
    int maxsum = 0;  
    int max_st = 0;  
    
    for(int i = 0; i < M; i+=1) {
        int sum = 0;  
        for(int j = 0; j < N; j+=1) {
            sum += A[i][j];
        }
        
        if(sum > maxsum) {
            maxsum = sum;
            max_st = i;
        }
    }

    for(int i = 0; i < M; i+=1) {
        for(int j = 0; j < N; j+=1) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("Summa %d \n", maxsum);
    printf("Strika s naib summoi %d \n", max_st + 1);
   
    
    return 0;
}