#include <stdio.h>
#include <math.h>
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

    if(s1 > s2 && s1 > s3){
        printf("max S у 1ого"); printf(" S1 = %.2f",s1 );
    }
    if(s2 > s1 && s2 > s3){
        printf("max S у 2ого"); printf(" S2 = %.2f",s2 );
    }
    if(s3 > s1 && s3 > s2){
        printf("max S у 3ого"); printf(" S3 = %.2f",s3 );
    }
    
    return 0;
}