#include <stdio.h>
#include <math.h>

int main() {
    
    double x, y;
    printf("Введите координаты x и y ");
    scanf("%lf %lf", &x, &y);

    
    if (x >= -2 && x <= 0 && y >= 0 && y <= 1){
        printf("a)nочка принадлежит области \n");
    }
    else{
        printf("a)nочка не принадлежит области \n");
    }
  
    if (x*x + y*y <= 25 && y >= 0){
        printf("б)точка принадлежит области \n");
    }
    else{
        printf("б)Точка не принадлежит области \n");
    }

    
    if ((x*x + (y-3)*(y-3)) <= 9 && x >= 0){
        printf("с)Точка принадлежит области \n");
    }
    else{
        printf("с)Точка не принадлежит области\n");
    }

    
    if (x >= 0 && y >= 0 && y <= -2*x + 2){
        printf("d)Точка принадлежит области\n");
    }
    else{
        printf("d)Точка не принадлежит области\n");
    }

    return 0;

}
