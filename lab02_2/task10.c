#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    printf("Введите 3 положительных числа = ");
    scanf("%lf %lf %lf", &a, &b, &c);
 
    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        printf("стороны должны быть +\n");
        return 1;
    }
    

    if ((a + b > c) && (a + c > b) && (c + b > a)){
        printf("Треугольник со сторонами %.2f, %.2f, %.2f существует\n", a, b, c);
    } else {
        printf("Треугольник не существует\n");
    }


    if ((a == b) && (a == c) && (b==c))
    {
      printf("треугольник равносторонний\n");
    } 
    else
    {
        if ((a == b) || (a == c) || (b == c))
        {
            printf("треугольник равнобедренный\n");
        }
        else
        {
            if( (a*a + b*b == c*c) || (b*b+ c*c == a*a) || (c*c + a*a == b*b))
            {
                printf("треугольник прямоугольный\n");
            }
            else
            {
                printf("треугольник обычный");
            }
    }
    }
return 0; 

    
}
    
