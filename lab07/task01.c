#include <stdio.h>
#include <stdlib.h>

double tSUM (double a, double b){
    double sum = a + b;
    return  sum;}
double tRAZ (double a, double b){ 
    double raz = a - b;
    return  raz;}
double tPROIZ (double a, double b){ 
    double proiz = a * b;
    return  proiz;
}

int main() {
    double a, b;
    printf("a = "); scanf("%lf", &a);
    printf("b = "); scanf("%lf", &b);

    double raz1 = tRAZ(a,2);
    double sum1 = tSUM(raz1, b);
    double proiz1 = tPROIZ(5,sum1);
    double proiz2 = tPROIZ(1000,a);
    double sum2 = tSUM(proiz1, proiz2);

    printf("5(a-2+b) + 1000*a = %.2lf", sum2);
 return 0;
}
