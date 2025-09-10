#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    int N, s, m, h;

    printf("Введите количество секунд= ");

    scanf("%d", &N);

    s = N % 60;
     m = (N % 3600) / 60;
     h = N / 3600;
    
    printf("Часы: %d\n", h);
    printf("Секунды: %d\n", s);
    printf("Минуты: %d\n", m);
    
    return 0;
}
