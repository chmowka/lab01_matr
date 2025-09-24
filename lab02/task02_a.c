#include <stdio.h>
#include <math.h>

int main(){
    double a;
    printf("Введите целое число \n");
    printf("a = "); scanf("%lf", &a);

    

    if(a == 0){
        printf("Число равно нулю = %.2f",a);
    }
    else{
        
        if (a > 0)
        {
          printf("Число положительное = %.2f",a);
        } else {
            printf("Число отрицательное = %.2f",a);
        }
    }
    return 0;
}