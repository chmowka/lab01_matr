#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    // h = (b-a)/n
    // x_i = a + i * h
    // f_i= f(x_i)

    // интеграл b_a f(x)dx = f((a+b)/2) (b-a)
    // f(x) = f(a+(i-0,5)h)



    double a =0.0, b =1.0;
    double ep = 0;
    int n = 1;
    double h, integ_n, integ_v;

    h = (b-a)/n;
    integ_n = h *cos(a+ h/2);

    for(int i =0; i <n; i+=1){
        double x;
        x = a+ (i+0,5) *h;
    }



    



    
return 0;
}