#include <stdio.h>
#include <math.h>

double disk(double a, double b, double c, double *x1, double *x2){
    double d;

    d = b * b - 4 * a * c;

    if (d<0){
        return 0;
    }

    *x1 = ((-b + sqrt(d))/(2*a));
    *x2 = ((-b - sqrt(d))/(2*a));
    return 1;
}

int main(){

    double a, b, c, kor1, kor2;
    int answer;

    printf("4x^2 - 5x + 1 = 0 ");
    a= 4;
    b=-5;
    c=1;

    answer = disk(a,b,c,&kor1,&kor2);

    if (answer == 1) {
        printf("korni = x1 = %.2f, x2 = %.2f \n \n", kor1, kor2);
    } else {
        printf("net korney \n \n");
    }
    
    printf("13x^2 - 2x + 5 = 0 ");
    a= 13;
    b=-2;
    c=5;

    answer = disk(a,b,c,&kor1,&kor2);

    if (answer == 1) {
        printf("korni = x1 = %.2f, x2 = %.2f \n \n", kor1, kor2);
    } else {
        printf("net korney \n \n");
    }


     printf("x^2 - 4x + 4 = 0 ");
    a= 1;
    b=-4;
    c= 4;

    answer = disk(a,b,c,&kor1,&kor2);

    if (answer == 1) {
        printf("korni = x1 = %.2f, x2 = %.2f \n \n", kor1, kor2);
    } else {
        printf("net korney \n \n");
    }

    return 0;

}
