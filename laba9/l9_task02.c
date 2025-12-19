#include <stdio.h>
#include <math.h>

void input_m(int m, int n, int mat[m][n]) {
    printf("VVOD matrici %d x %d\n", m, n);
    for (int i = 0; i < m; i+=1) {
        for (int j = 0; j < n; j+=1) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}


void print_m(int m, int n, int mat[m][n]) {
    printf("Matrica %dx%d:\n", m, n);
    for (int i = 0; i < m; i+=1) {
        for (int j = 0; j < n; j+=1) {
            printf("%d ", mat[i][j]); 
        }
        printf("\n"); 
    }
}


void square_m(int m, int n, int mat[m][n], int result[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat[i][j] * mat[i][j]; 
        }
    }
}

int main() {
    int m, n;
    
    printf("KOL-vo strok = ");
    scanf("%d", &m);
    
    printf("KOL-vo stolbcov = ");
    scanf("%d", &n);
    
    
    
    int matrica[m][n];
    int squar_mat[m][n];  
    
    input_m(m, n, matrica);
    printf("\n");
    
    print_m(m, n, matrica);
    printf("\n");
    
    square_m(m, n, matrica, squar_mat);
    
    printf("Matrica s kvadratami \n");
    print_m(m, n, squar_mat);
    
    return 0;
}
