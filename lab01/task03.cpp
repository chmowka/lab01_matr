#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "rus");
  
  double tC, tF, tK;
  
  printf("Введите температуру в градусах Цельсия \n");
  printf("градусы  Цельсия= \n");
  scanf("%lf", &tC);
  
  
  tF = 1.8 * tC + 32 ;
  printf("Градусах шкалы Фаренгейта = %lf \n", tF);
  tK = tC + 273;
  printf("Градусах шкалы Кельвина  = %lf \n", tK);
  
  
    return 0;
}