#include <stdio.h>
#include <math.h>

int main(){

int  n, i = 2, sum = 0;
double s = 0.0;

printf("n= ");
scanf("%d", &n);

while( i <=n){
    sum +=i;
    s +=cos(sum);
    i+=2;
    printf("s %lf = cos(sum %d )\n", s, sum);
}

printf("s = %.2lf ", s);

return 0;
}
