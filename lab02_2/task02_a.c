#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Введите целое число \n");
    printf("a = "); scanf("%ld", &a);

    

    if(a == 0){
        printf("Число равно нулю = %d",a);
    }
    else{
        
        if (a > 0)
        {
          printf("Число положительное = %d",a);
        } else {
            printf("Число отрицательное = %d",a);
        }
    }
    return 0;
}