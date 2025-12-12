#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Функция вычисляет f(x) по формуле
// Возвращает true если можно вычислить, false если нельзя
// Результат записывает через указатель result
bool f(double x, double *result) {
    // Проверяем, можно ли вычислить
    if (x == 1.0) {
        // В первой формуле есть деление на (1-x)
        // Если x=1, то будет деление на 0
        return false; // Нельзя вычислить
    }
    
    // Вычисляем по формуле
    if (x <= 2.0) {
        *result = 2 * x + 1.0 / (1.0 - x);
    }
    else if (x <= 5.0) {
        *result = 3 * x / 10.0;
    }
    else {
        *result = (-3.0 - x);
    }
    
    return true; // Вычисление успешно
}

int main() {
    double a, b;
    double value1, value2, value3, value4, value5, value6;
    double result1, result2;
    
    // Вводим числа a и b
    printf("Vvedite a: ");
    scanf("%lf", &a);
    
    printf("Vvedite b: ");
    scanf("%lf", &b);
    
    // Вычисляем f(2) - f(0)*f(a)
    printf("\n1) f(2) - f(0)*f(a)\n");
    
    // Вычисляем f(2)
    if (f(2.0, &value1)) {
        printf("   f(2) = %.2f\n", value1);
    } else {
        printf("   f(2) ne mozhet byt vychisleno\n");
        return 1; // Завершаем программу с ошибкой
    }
    
    // Вычисляем f(0)
    if (f(0.0, &value2)) {
        printf("   f(0) = %.2f\n", value2);
    } else {
        printf("   f(0) ne mozhet byt vychisleno\n");
        return 1;
    }
    
    // Вычисляем f(a)
    if (f(a, &value3)) {
        printf("   f(a) = %.2f\n", value3);
    } else {
        printf("   f(a) ne mozhet byt vychisleno (a = 1?)\n");
        return 1;
    }
    
    // Вычисляем результат
    result1 = value1 - value2 * value3;
    printf("   Rezultat: %.2f - (%.2f * %.2f) = %.2f\n\n", value1, value2, value3, result1);
    
    // Вычисляем f(2a) - f(6) + f(ab)
    printf("2) f(2a) - f(6) + f(a*b)\n");
    
    // Вычисляем f(2a)
    if (f(2.0 * a, &value4)) {
        printf("   f(2a) = %.2f\n", value4);
    } else {
        printf("   2a = %.2f, f(2a) ne mozhet byt vychisleno\n", 2.0*a);
        return 1;
    }
    
    // Вычисляем f(6)
    if (f(6.0, &value5)) {
        printf("   f(6) = %.2f\n", value5);
    } else {
        printf("   f(6) ne mozhet byt vychisleno\n");
        return 1;
    }
    
    // Вычисляем f(ab)
    if (f(a * b, &value6)) {
        printf("   f(a*b) = %.2f\n", value6);
    } else {
        printf("   a*b = %.2f, f(a*b) ne mozhet byt vychisleno\n", a*b);
        return 1;
    }
    
    // Вычисляем результат
    result2 = value4 - value5 + value6;
    printf("   Rezultat: %.2f - %.2f + %.2f = %.2f\n", value4, value5, value6, result2);
    
    return 0;
}
