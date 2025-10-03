#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    printf("Введите 3 положительных числа = ");
    scanf("%lf %lf %lf", &a, &b, &c);
 
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("стороны должны быть +\n");
        return 1;
    }
    
    // Проверка существования треугольника
    if (a + b > c)&&  a + c > b  && c + b > a) {
        printf("Треугольник со сторонами %.2f, %.2f, %.2f существует\n", a, b, c);
    }else {
        printf("Треугольник не существует\n");
    }


if (a == b  && a == c && c == a){
  printf("треугольник равносторонний");
} else { 
  if(a == b || a == c ||c == a){
    if( a*a + b*b == sqrt(c)|| b*b+ c*c = sqrt(a) || c*c + a*a = sqrt(b)){
      printf("треугольник прямоугольный");
    } else{
    printf("треугольник равнобедренный");
  } else{
    printf("треугольникразносторонний");
  }
}
return 0; 
}
    
