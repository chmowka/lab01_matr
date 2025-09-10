#include <stdio.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "rus");
  
  double R, V;
  const double PI = 3.14159;
  
  printf("Введите радиус шара \n");
  scanf("%lf", &R);
  
  
  V = 4.0/3.0 * PI * (R*R*R);
  printf("Объем шара V = %lf \n", V);

  
  
    return 0;
}


