#include <stdio.h>
#include <math.h>

void mesta(int *x, int *y){
    int c;

    c = *x;
    *x = *y;
    *y = c;
}

int main (){

    int v, p, k;

    printf("S doma Vasi = "); scanf("%d", &v);
    printf("S doma Peti = "); scanf("%d", &p);
    printf("S doma Koli = "); scanf("%d", &k);

    mesta(&v, &p);
    mesta(&p, &k);
    
    printf("\n");

    printf("S doma Vasi = %d \n", v); 
    printf("S doma Peti = %d \n", p); 
    printf("S doma Koli = %d \n", k); 

    printf("\n  B)  \n");

    int arr[10];  

    for (int i = 0; i < 10; i+=1) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    for (int i = 0; i < 10; i+=1) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    for (int i = 0; i < 9; i = i + 2) {
        mesta(&arr[i], &arr[i + 1]);
    }
    
    
    printf("posle obmena ");
    for (int i = 0; i < 10; i+=1) {
        printf("%d ", arr[i]);
    }
    return 0;
}
