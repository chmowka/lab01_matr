#include <stdio.h>
#include <math.h>

void f1(double a){
    return double tF = 1.8 * tC + 32.0;
}
void f2(double a){
    return double tK = tC + 273.0;
}
void f3(double tC,double *tK, double *tF){
    *tF = 1.8 * tC + 32.0;
    *tK = tC + 273.0;
}

int main(){

    int tC;
    printf("tC ="); scanf("%d", &tC);

    f1(tC);
    printf("tF = %d", tF);



}
