#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    int a, b, a2, b2, summ; 
    
    printf("найти сумму последних цифр"); 
    
    printf("Введите 1ое число = "); 
    scanf("%d", &a); 
    printf("Введите 2ое число = "); 
    scanf("%d", &b);
    
    a2 = a % 10;
    b2 = b % 10;
    
    summ = a2+ b2;
    
    printf("сумма последних цифр = %d \n", summ); 
     
    
    return 0;
}