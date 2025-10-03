#include <stdio.h>
#include <math.h>

int main(){
    double a1, b1, a2, b2;
    printf("Введите стороны 1-ого прямоугольника \n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);

    printf("Введите стороны 2-ого прямоугольника \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);
    
    double s1, s2;

    s1 =a1 *b1;
    s2 =a2 *b2;
    

    if(s1 == s2){
        printf("Площади равны. Их площадь = %.2f",s1);
    }
    else{
        printf("Площади не равны.");
        printf(" S1 = %.2f",s1 );
        printf(" S2 = %.2f",s2 );
    }
    return 0;
}