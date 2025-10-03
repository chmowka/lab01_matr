#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Введите три числа =  ");
    scanf("%d %d %d", &a, &b, &c);
    
    
    int sum = 0;
    if (a > 10) sum += a;
    if (b > 10) sum += b;
    if (c > 10) sum += c;
    printf("Сумма чисел больше 10: %d\n", sum);
    
    int e = 0;
    if (a % 2 == 0) even++;
    if (b % 2 == 0) even++;
    if (c % 2 == 0) even++;
    printf("Количество четных чисел: %d\n", even);
    
    int mid;
    if ((a >= b && a <= c) || (a <= b && a >= c)) middle = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c)) middle = b;
    else middle = c;
    printf("Среднее число: %d\n", middle);

    if (a <= b && a <= c) printf("Наименьшее числ первое\n");
    else if (b <= a && b <= c) printf("Наименьшее число второе\n");
    else printf("Наименьшее число третье\n");
    
    return 0;
}
