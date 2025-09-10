#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "rus");
  
  double a, b, summ, raz, pr;
  
  printf("Введите два числа \n");
  printf("a= \n");
  scanf("%lf", &a);
  printf("b= \n");
  scanf("%lf", &b);
  
  summ = a + b;
  printf("Сумма чисел = %lf \n", summ);
  raz = a - b;
  printf("Разность чисел = %lf \n", raz);
  pr = a * b;
  printf("Произведение чисел = %lf \n", pr);
  
    return 0;
}