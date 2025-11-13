#include <stdio.h>

int main() {
    int M = 6, N = 3;
    int num[6] = {1, 2, 3, 4, 5, 6}; 
    int A[6][3];  

    for(int i = 0; i < M; i+=1) {
        for(int j = 0; j < N; j+=1) {
            A[i][j] = num[i]; 
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}