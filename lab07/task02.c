#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double tKOR1 (double x1, double x2){
    double razX = (x2 - x1)*(x2 - x1);
    return  razX;
}
double tKOR2 (double y1, double y2){ 
    double razY = (y2 - y1)*(y2 - y1);
    return  razY;
}
double kSUM (double a, double b){ 
    double  sum = a + b;
    return  sum;
}
double KOREN (double a){ 
    double  kor = sqrt(a);
    return  kor;
}



int main() {
    double x1, x2, y1, y2;
    printf("x1 = "); scanf("%lf", &x1);
    printf("x2 = "); scanf("%lf", &x2);
    printf("y1 = "); scanf("%lf", &y1);
    printf("y2 = "); scanf("%lf", &y2);

    double razX = tKOR1(x1,x2);
    double razY = tKOR2(y1,y2);
    double sum2 = kSUM(razX,razY);
    double kor2 = KOREN(sum2);

    printf("row(x2 -x1)^2  + (y2 -y1)^2)= %.2lf", kor2);
 return 0;
}
