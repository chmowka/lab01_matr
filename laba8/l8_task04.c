#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool f(double x, double *answer) {
    if (x == 1.0){
        return false; 
    }
    
    if (x <= 2.0) {
        *answer = 2 * x + 1.0 / (1.0 - x);
    }
    else if (x <= 5.0) {
        *answer = 3 * x / 10.0;
    }
    else {
        *answer = (-3.0 - x);
    }
    return true; 
}

int main() {
    double a, b;
    double num1, num2, num3, num4, num5, num6, answer1, answer2;
    
    printf("a = ");
    scanf("%lf", &a);
    
    printf("b = ");
    scanf("%lf", &b);
    
    printf("\n1) f(2) - f(0)*f(a)\n");
   
    if (f(2.0, &num1)) {
        printf("f(2) = %.2f\n", num1);
    } else {
        printf("f(2) ne reshaetsya\n");
        return 1; 
    }
    
    if (f(0.0, &num2)) {
        printf("   f(0) = %.2f\n", value2);
    } else {
        printf("   f(0) ne mozhet byt vychisleno\n");
        return 1;
    }
    
    // Вычисляем f(a)
    if (f(a, &num3)) {
        printf("   f(a) = %.2f\n", value3);
    } else {
        printf("   f(a) ne mozhet byt vychisleno (a = 1?)\n");
        return 1;
    }
    
    answer1 = num1 - num2 * num3;
    printf(" otvet  %.2f - (%.2f * %.2f) = %.2f\n\n", num1, num2, num3, answer1);
    
    printf("2) f(2a) - f(6) + f(a*b)\n");
    
    if (f(2.0 * a,  &num4)) {
        printf("   f(2a) = %.2f\n", num4);
    } else {
        printf("   2a = %.2f, f(2a) ne mozhet byt vychisleno\n", 2.0*a);
        return 1;
    }

    if (f(6.0, &num5)) {
        printf("   f(6) = %.2f\n", num5);
    } else {
        printf("   f(6) ne mozhet byt vychisleno\n");
        return 1;
    }
    
    // Вычисляем f(ab)
    if (f(a * b, &num6)) {
        printf("   f(a*b) = %.2f\n", num6);
    } else {
        printf("   a*b = %.2f, f(a*b) ne mozhet byt vychisleno\n", a*b);
        return 1;
    }
    
    // Вычисляем результат
    answer2 = num4 - num5 + num6;
    printf("otvet %.2f - %.2f + %.2f = %.2f\n", num4, num5, num6, answer2);
    
    return 0;
}

