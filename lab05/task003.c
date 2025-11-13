#include <stdio.h>

int main() {
    int n = 5;
    int a[5][5];
    
    printf("A) EDINICHNAYA %dx%d \n", n, n);
    for(int i = 0; i < n; i += 1) {
        for(int j = 0; j < n; j+= 1) {
            if(i == j) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
            printf("%d ", a[i][j]);
        }
        printf("\n ");
    }
    printf("\n ");


    int n2 = 6;
    int a2[6][6];
    
    printf("B) TREYGOLNAYA %dx%d \n", n2, n2);
    for(int i = 0; i < n2; i+= 1) {
        for(int j = 0; j < n2; j+= 1) {
            if(j >= i) {
                a2[i][j] = n2 - (j - i);
            } else {
                a2[i][j] = 0;
            }
            printf("%2d ", a2[i][j]);
        }
        printf("\n");
    }
    printf("\n ");



    int n3 = 5;
    int a3[5][5];
    
    printf("C) OBRATNAYA TREYGOLNAYA  %dx%d  \n", n3, n3);
    for(int i = 0; i < n3; i+= 1) {
        for(int j = 0; j < n3; j+= 1) {
            if(i + j >= n3 - 1) {
                a3[i][j] = (i + j) - (n3 - 2);
            } else {
                a3[i][j] = 0;
            }
            printf("%2d ", a3[i][j]);
        }
        printf("\n");
    }
    printf("\n ");



    int n4 = 8;
    int a4[8][8];
    
    printf("D) SHAHMATNAYA DOSKA %dx%d  \n", n4, n4);
    for(int i = 0; i < n4; i+= 1) {
        for(int j = 0; j < n4; j+= 1) {
            if((i + j) % 2 == 0) {
                a4[i][j] = 1;
            } else {
                a4[i][j] = 0;
            }
            printf("%d ", a4[i][j]);
        }
        printf("\n");
    }
    printf("\n ");



    int n5 = 10;
    int a5[10][10];
    
    printf("E) KOLTZA %dx%d  \n", n5, n5);
    for(int i = 0; i < n5; i += 1) {
        for(int j = 0; j < n5; j+= 1) {
            
            
            printf("%2d ", a5[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}