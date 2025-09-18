#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    int num;

    printf("Введите трехзначное число = ");
    scanf("%d", &num);
 

    if (num < 100 || num > 999) {
      printf("Ошибка: число не трехзначное \n");
      return 1;
    }

    int num1, num4;

    num1 = num / 100;
    num4 = num % 10;

    printf("первая цифра = %d\n", num1);
    printf("последняя цифра = %d\n", num4);

    return 0;
}

