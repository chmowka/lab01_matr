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
    double a =2.0, b = 2.0;
    double num1, num2, num3, num4, num5, num6, answer1, answer2;
    
    //printf("a = ");
    //scanf("%lf", &a);
    
    //printf("b = ");
    //scanf("%lf", &b);
    
    printf("\n1) f(2) - f(0)*f(a)\n");
   
    f(2.0, &num1);
    printf("f(2) = %.2f\n", num1);
    
    
    f(0.0, &num2);
    printf("   f(0) = %.2f\n", num2);
   
    
    f(a, &num3);
    printf("   f(a) = %.2f \n", num3);
    
    answer1 = num1 - num2 * num3;
    printf(" otvet  %.2f - (%.2f * %.2f) = %.2f\n\n", num1, num2, num3, answer1);
    
    printf("2) f(2a) - f(6) + f(a*b)\n");
    
    f(2.0 * a,  &num4);
    printf("   f(2a) = %.2f\n", num4);

    f(6.0, &num5);
    printf("   f(6) = %.2f\n", num5);
    

    f(a * b, &num6);
    printf("   f(a*b) = %.2f\n", num6);
    
    
    answer2 = num4 - num5 + num6;
    printf("otvet %.2f - %.2f + %.2f = %.2f\n", num4, num5, num6, answer2);
    
    return 0;
}
