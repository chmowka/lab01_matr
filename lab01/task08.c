#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    int num;

    printf("Введите четырехзначное число = ");
    scanf("%d", &num);
 

    if (num < 1000 || num > 9999) {
      printf("Ошибка: число не четырехзначное\n");
      return 1;
    }

    int num1, num4;

    num1 = num / 1000;
    num4 = num % 10;

    printf("первая цифра = %d\n", num1);
    printf("последняя цифра = %d\n", num4);

    return 0;
}
