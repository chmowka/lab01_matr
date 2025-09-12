#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(void)
{
    setlocale(LC_ALL, "");
    double volume, a, b, c, s, h, rad;


    printf("Введите сторону a = ");
    scanf("%lf", &a);

    printf("Введите сторону b = ");
    scanf("%lf", &b);

    printf("Угол между ними = ");
    scanf("%lf", &c);

    printf("Высота = ");
    scanf("%lf", &h);

    rad = c *( M_PI /180.0);

    s = a * b * sin(rad);
    printf("Площадь основания = %f", s);

    volume = s * h;
    printf("Объем параллелепипеда = %f", volume);



    return 0;
}
