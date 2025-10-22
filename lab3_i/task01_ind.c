#include <stdio.h>
#include <math.h>

int main(){

    int n;

    printf("n=");
    scanf("%d", &n);

    for (int i= 1; i <= n; i += 1){
        for (int a ; a <= n; a +=1){
            a = n-i+1;
            printf("%d", a);
            for(int k = 1; k < n-i; k+=1){
            printf("-");
            }
        }
        printf("\n");
    }

    return 0;


}