#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {

    setlocale(LC_ALL, "");
    int num1, num2, num3;

    printf("Напишите три целых числа = ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int num4 = (num1 - num2) < 0;

    num4 ? printf ("%d", (num2 > num3) ? num2 : num3) : printf("%d %d %d", num1*num1, num2*num2, num3*num3);

    return 0;

}
