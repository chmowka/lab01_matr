#include <stdio.h>
#include <math.h>

double f1(double tC){
    return   1.8 * tC + 32.0;
}
double f2(double tC){
    return  tC + 273.0;
}
double f3(double tC,double *tF, double *tK){
    *tF = 1.8 * tC + 32.0;
    *tK = tC + 273.0;
}

int main(){

    double tC;
    printf("tC ="); scanf("%lf", &tC);

    double tF1 = f1(tC);
    printf("t v farengeitax = %.3lf \n", tF1);

    double tK1 = f2(tC);
    printf("t v kelvinah = %.3lf \n", tK1);

    double tF2, tK2;
    f3(tC, &tF2, &tK2);
    printf("FARENGEITTI %.2f \n", tF2);
    printf("KELVINI %.2f \n", tK2);


    return 0;
}
