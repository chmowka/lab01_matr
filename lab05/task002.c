#include <stdio.h>

int main() {
    int n = 3, m = 4;
    int arr[n][m];
    int mini = 0, minj = 0;
    int mina;

    printf("arr[n; m] =  \n");
    for(int i = 0; i < n; i += 1) {
        for(int j = 0; j < m; j += 1) {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    mina = arr[0][0];

    printf("Введенный массив:\n");
    for(int i = 0; i < n; i += 1) {
        for(int j = 0; j < m; j += 1) {
            printf("%d ", arr[i][j]);
            if(arr[i][j] < mina) {
                mina = arr[i][j];
                mini = i;
                minj = j;
            }
        }
        printf("\n");
    }

    printf("A) stroka %d, stolbez %d\n", mini + 1, minj + 1);

    int minStol = minj;  

    printf("\nstolbe s min elem %d\n", minStol + 1);

    for(int i = 0; i < n; i += 1) {
        int zam = arr[i][minStol];
        arr[i][minStol] = arr[i][m-1];
        arr[i][m-1] = zam;
    }

    printf("Massiv next \n");

    for(int i = 0; i < n; i += 1) {
        for(int j = 0; j < m; j += 1) {  
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}