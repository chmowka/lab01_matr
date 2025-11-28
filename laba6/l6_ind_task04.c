#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    
    int M, N, k, l, min_val, max_val, min_in, max_in, temp;
    int **matrix;
    
    
    printf("Vvedite razmer matricy M i N: ");
    scanf("%d %d", &M, &N);
    
    if (M <= 0 || N <= 0) {
        printf("Razmery dolzhny byt polozhitelnymi!\n");
        return 1;
    }
    
    matrix = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));
    }
    
    printf("Vvedite elementy matricy %dx%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nIshodnaya matrica:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    for ( int i = 0; i < M; i++) {
        min_val = matrix[i][0];
        max_val = matrix[i][0];
        min_in = 0;
        max_in = 0;
        
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
                min_in = j;
            }
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_in = j;
            }
        }
        
        temp = matrix[i][min_in];
        matrix[i][min_in] = matrix[i][max_in];
        matrix[i][max_in] = temp;
    }
    
    printf("\nPreobrazovannaya matrica:\n");
    for (int i = 0; i < M; i++) {
        for  ( int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < M; i++) {
        free(matrix[i]);
    }
    
    return 0;
}