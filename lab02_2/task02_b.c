#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Введите целое число \n");
    printf("a = "); scanf("%ld", &a);

    

    if(a % 2 == 0){
        printf("Число равно четное = %d",a);
    }
    else{
        printf("Число нечетноxе  = %d",a);
    }
    return 0;
}