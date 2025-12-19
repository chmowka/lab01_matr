#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void input(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]); 
    }
    printf("Vivod \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, a[i]);
    }
}

void output(int *a, int n){
    printf("Vivod \n");
    for (int i = 0; i < n; i++) {
         printf("arr[%d] = %d\n", i, a[i]);
    }
}

int scalar(int *a1, int *a2, int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += a1[i] * a2[i];  
    }
    return result;
}

void slo(int *a1, int *a2, int *result, int n) {
    for (int i = 0; i < n; i++) {
        result[i] = a1[i] + a2[i];  
    }
}

int *scalar2(int *a, int n, int scalar) {
    int *result = (int*)malloc(n * sizeof(int));
    if (result == NULL) {
        printf("Oshibka pamyati!\n");
        return NULL;
    }
    
    for (int i = 0; i < n; i++) {
        result[i] = a[i] * scalar;  
    }
    
    return result; 
}

int main(){
    int n;
    int arr1[20], arr2[20];
   
    printf("Razmer massivov ");
    scanf("%d", &n);
    
    printf("Zadanie a i b  \n");
    printf("Massiv 1 \n");
    input(arr1, n);

    printf("\n");
    printf("Zadanie c  \n");
    printf("Massiv 2 \n");
    input(arr2, n);

    int ymno = scalar(arr1, arr2, n);
    printf("\n  Skalyarnoe proizvedenie= %d \n", ymno);

    int suma_resulta[50];
    slo(arr1, arr2, suma_resulta, n);
    printf("\nSumma massivov \n");
    output(suma_resulta, n);

    int vect_skal;
    printf("\nVvedite chislo dlya umnozheniya: ");
    scanf("%d", &vect_skal);
        
    int *vect_result = scalar2(arr1, n, vect_skal);
    if (vect_result != NULL) {
        printf("Massiv 1 umnozhennyy na %d:\n", vect_skal);
        output(vect_result, n);
        free(vect_result);  
    }
    
    return 0;
