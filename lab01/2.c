#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(void)
{
    setlocale(LC_ALL, "");
    double volume, a, b, c, s, h, rad;


    printf("������� ������� a = ");
    scanf("%lf", &a);

    printf("������� ������� b = ");
    scanf("%lf", &b);

    printf("���� ����� ���� = ");
    scanf("%lf", &c);

    printf("������ = ");
    scanf("%lf", &h);

    rad = c *( M_PI /180.0);

    s = a * b * sin(rad);
    printf("������� ��������� = %f", s);

    volume = s * h;
    printf("����� ��������������� = %f", volume);



    return 0;
}
