#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    srand(time(0));

    int n=2, m=3;
    int arr[n][m];

    int allsum = 0, sum2_9 = 0;


    printf("arr[0; 30] =  \n");
    for(int i = 0; i < n; i +=1) {
        for (int j = 0; j < m; j +=1){

            arr[i][j] = rand() %31;
            printf("%d ",arr[i][j]);

            allsum += arr[i][j];

            if(2 < arr[i][j] && arr[i][j] < 9){
                sum2_9 += arr[i][j];
            }

        }
        printf("\n");
    }

    printf("B)  \n" );
    if(allsum %2 == 0){
        printf("Summ CHETI  %d \n", allsum);
    } else{
        printf("Summ NE CHETI  %d \n", allsum);
    }

    printf("C)  \n" );
    printf("Summ v diapazone [2,9]  %d \n", sum2_9);
    















    return 0;
}