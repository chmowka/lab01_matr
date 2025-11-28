#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    float a, b;
    float *pa, *pb;
    
    printf("Vvedite dva veshestvennyh chisla  ");
    scanf("%f %f", &a, &b);
    
    pa = &a;  
    pb = &b;  
    
    printf("a = %.2f, b = %.2f\n", a, b);
    
    if (*pa > *pb) {
        *pa = *pa + 3;     
        *pb = *pb / 3;      
    } else {
        *pa = *pa / 2;      
        *pb = *pb + 3;     
    }
    
    printf("Posle   a = %.2f, b = %.2f\n", a, b);
    
    return 0;
}