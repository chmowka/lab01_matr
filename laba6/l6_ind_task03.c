#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    
    int n, i, j, *arr,  curcount;
    int max_c = 0;
 
    
    printf("Vvedite razmer massiva ");
    scanf("%d", &n);
    
    
    printf("Vvedite %d celochislennyh elementov  \n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        curcount = 1;  
        
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                curcount++;
            }
        }
        
        if (curcount > max_c) {
            curcount = curcount;
        }
    }
    
    printf("Massiv: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nMaksimalnoe kolichestvo odinakovyh elementov  %d\n", max_c);
    
    return 0;
}