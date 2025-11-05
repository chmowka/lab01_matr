#include <math.h>
#include <stdio.h>


int main() {

    int n=3, m=4;
    int arr[n][m];



    printf("arr[n; m] =  \n");
    for(int i = 0; i < n; i +=1) {
        for (int j = 0; j < m; j +=1){

            scanf("%d", &arr[i][j]); printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }

}