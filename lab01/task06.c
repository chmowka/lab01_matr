#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double radius, h, volume, S_area; 
    
    printf("Введите радиус целиндра = "); 
    scanf("%lf", &radius); 
    printf("Введите высоту целиндра = "); 
    scanf("%lf", &h);
    
    volume = M_PI * radius * radius * h;
    S_area = 2 * M_PI * radius * (radius + h);
    
    printf("объем цилиндра = %lf \n", volume); 
    printf("площадь повер-ти цилиндра  = %lf", S_area); 
    
    return 0;
}
