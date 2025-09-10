#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double a, b, c, vol, s_a;

    printf("Введите длины ребер прямоугольного параллепипеда  \n");
    printf("а = \n");
    scanf("%lf ", &a);

    printf("b = \n");
    scanf("%lf ", &b);

    printf("c = \n");
    scanf("%lf ", &c);

    vol = a * b * c;
    s_a = 2 * (a*b + b*c + a*c);
    
    printf("Объем = %lf\n", vol);
    printf("Площадь поверхности %lf \n", s_a);
    
    return 0;
}