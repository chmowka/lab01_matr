#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");  
    printf("1) \n");
    
    float a1 = 1.5f, a2 = (float)M_PI;
    
    printf("Значение a1 =  %.2f\n", a1);
    printf("Значение a2= %.2f\n", a2);
    
    printf("Адрес a1 = %p\n", &a1);
    printf("Адрес a2 = %p\n", &a2);
    
    printf("Разность адресов: %ld\n", (long)(&a2) - (long)(&a1));
    
    printf("Размер a1 = %zu байт\n", sizeof(a1));
    printf("Размер a2 = %zu байт\n", sizeof(a2));
    
    printf(" 2) \n");
    
    float arr[5] = {1.5f, (float)M_PI, -0.7f, 3.0f, -2.4f};
    
    printf("1 элемент  = %.2f, адрес = %p\n", *(arr), arr);
    printf("2 элемент  = %.2f, адрес = %p\n", *(arr + 1), arr + 1);
    printf("Последний элемент значение = %.2f, адрес = %p\n", *(arr + 4), arr + 4);
    
    printf("Разность адресов 1 и 2 элементов %ld\n", (long)(&arr[1]) - (long)(&arr[0]));
    
    printf("3) \n");
    
    float *zna1 = (float*)malloc(sizeof(float));
    float *zna2 = (float*)malloc(sizeof(float));
    
    *zna1 = a1 + a2;
    *zna2 = a1 - a2;
    
    printf(" zna1 сумма =%.2f\n", *zna1);
    printf(" zna2 разность= %.2f\n", *zna2);
    
    printf("Адрес zna1 = %p\n", zna1);
    printf("Адрес zna2 =  %p\n", zna2);
    
    printf("Разность динамических адресов  %ld\n", (long)zna2 - (long)zna1);
    
    free(zna1);
    free(zna2);
    
    printf("Память свободна !\n");
    
    return 0;
}