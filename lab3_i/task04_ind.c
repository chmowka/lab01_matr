#include <stdio.h>
#include <math.h>


int main(){

double x, ryad =1.0, sum = 0.0;
int n =1;
double eps = 1e-7;

printf("x= ");
scanf("%lf", &x);

while(ryad > eps){
    ryad  = ryad * x *x /((2*n-1)*2*n);
    sum = sum + ryad;
    n+=1;
    printf("n = %d \n ryad = %.2lf \n sum = %.2lf\n", n, ryad, sum);
}

return 0;
}