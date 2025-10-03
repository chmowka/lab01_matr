#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#include <locale.h>

int main(){
    setlocale(LC_ALL, " rus");
    double a1, b1, a2, b2, a3, b3;
    printf("Введите стороны 1-ого прямоугольника \n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);

    printf("Введите стороны 2-ого прямоугольника \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);

    printf("Введите стороны 3-ого прямоугольника \n");
    printf("a3= "); scanf("%lf", &a3);
    printf("b3= "); scanf("%lf", &b3);
    
    double s1, s2, s3;

    s1 =a1 *b1;
    s2 =a2 *b2;
    s3 =a3 *b3;


    double max_s = fmax( fmax(s1,s2),s3);

    printf("max S = %.2f", max_s ); 

    return 0;
}
