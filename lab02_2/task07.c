#include <stdio.h>

int main() {
    double x, y, d;
    int o, p;
    
    printf("Введите координаты попадания x y ");
    scanf("%lf %lf", &x, &y);
    
    d = x*x + y*y;
    
    if (d <= 4) { 
        p = 1;  
    } else if (d <= 16) { 
        p= 2;  
    } else {
        p = 3;  
    }
    

    switch (p) {
        case 1:
            o = 10;
            break;
        case 2:
            o = 5;
            break;
        case 3:
           o = 0;
            break;
        default:
            o = 0; 
            break;
    }
    
    printf("координаты (%.2f, %.2f)\n", x, y);
    printf("попадание  %.2f\n", d);
    printf("очков %d\n", o );
    
    return 0;
}
