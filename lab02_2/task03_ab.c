#include <math.h>
#include <stdio.h>

int main (){
    double x, y;

    printf ("Введите число x = ");
    scanf("%lf", &x);

    if(x <= -2){
        y = 0;
    } else{
        if(x <= 10){
            y= x*x+4*x+5;
        } else{
        y= 1/ (x*x+4*x-5);
        }
    }
    printf("f(%.2f) = %.2f\n", x, y );

    

    double  a,b;

    printf("Введите число x =");
    scanf("%lf", &a);

    if(a <= -2){
        b =0;
    } else{
        if(a<= 0){
            b =a*a+4*a+5;
        } else{
          if (a*a+4*a-5 == 0){
            printf("Ответа нет, знаменатель = 0");
        }  else{
            b= 1/(a*a+4*a-5);
            }
        }
    }
    printf("f(%.2f) = %.2f\n", a, b );


    return 0;
}