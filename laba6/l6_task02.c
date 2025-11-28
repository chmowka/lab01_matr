#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    int n;
    int i;
    float *arr, sum = 0, scalar = 0;
    float min1, min2;
    float *new_arr;
    
    printf("Массив n = ");
    scanf("%d", &n);

    
    arr = (float*)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Oshibka\n");
        return 1;
    }
    
    printf("Vvedite %d elementov massiv\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d ", i + 1);
        scanf("%f", arr + i);
    }
    
    printf("\nIshodnyi massiv  \n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(arr + i));
    }
    printf("\n");
    
    for (i = 0; i < n; i++) {
        if (*(arr + i) > 0) {
            sum += *(arr + i);
        }
    }
    printf("1) Summa polozhitelnyh elementov %.2f\n", sum);
    
   
    min1 = *(arr + 0);
    for (i = 1; i < n; i++) {
        if (*(arr + i) < min1) {
            min1 = *(arr + i);
        }
    }
    
   
    min2 = min1; 
    
  
    for (i = 0; i < n; i++) {
        if (*(arr + i) > min1) {
            min2 = *(arr + i); 
            break; 
        }
    }

    for (i = 0; i < n; i++) {
        if (*(arr + i) > min1 && *(arr + i) < min2) {
            min2 = *(arr + i);
        }
    }
    
    if (min2 == min1) {
        printf("2) Vtoroi minimum ne naiden (vse elementy odinakovy)\n");
    } else {
        printf("2) Vtoroi minimum: %.2f\n", min2);
    }
    
    new_arr = (float*)malloc(n * sizeof(float));
    if (new_arr == NULL) {
        printf("Oshibka \n");
        free(arr);
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        if (*(arr + i) > 0) {
            *(new_arr + i) = *(arr + i) * 10;  
            *(new_arr + i) = *(arr + i) - 100; 
    }
    
  
    printf("3) Novyi massiv: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(new_arr + i));
    }
    printf("\n");
    
   
    for (i = 0; i < n; i++) {
        scalar += (*(arr + i)) * (*(new_arr + i));
    }
    printf("4) Skalyarnoe proizvedenie %.2f\n", scalar);
    
  
    free(arr);
    free(new_arr);
    
    
    return 0;
}