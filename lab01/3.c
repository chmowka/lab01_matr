#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {

    setlocale(LC_ALL, "");
    double num1, num2, num3;

    printf("Введите три числа = ");
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);


    if (num1 - num2 < 0) {
        if (num2 > num3) {
            printf("Наибольшее из второго и третьего %.2l\n", num2);
        } else {
            printf("Наибольшее из второго и третьего: %.2lf\n", num3);
        }
    } else {
        printf("Квадраты чисел:\n");
        printf("%.2lf^2 = %.2lf\n", num1, pow(num1, 2));
        printf("%.2lf^2 = %.2lf\n", num2, pow(num2, 2));
        printf("%.2lf^2 = %.2lf\n", num3, pow(num3, 2));
    }

    return 0;

}

