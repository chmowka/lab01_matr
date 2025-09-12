#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y;
    scanf("%lf %lf", &x, &y);

    double A = (exp(x) - y*y + 12*x*y - 3*x*x) / (18*y - 1);
    double B = (1 + sin(sqrt(x + 1))) / cos(12*y - 4);

    printf("%+.5f\n", A);
    printf("%+.5e\n", B);

    return 0;
}
