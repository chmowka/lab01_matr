#include <stdio.h>

int main(void) {
    int x, y;

    printf("Введите x: ");
    scanf("%d", &x);

    y = (((5 * x + 2) * x - 7) * x + 3) * x + 4;

    printf("y = %d\n", y);

    return 0;
}

