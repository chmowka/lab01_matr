#include <stdio.h>
#include <math.h>

int main(){

int n, x, s = 0; 
int n1, pr3 = 1; 
int k55 = 0;

printf("n=");
scanf ("%d", &n);

while(n>0){
    printf("x = ");
    scanf("%d", &x);

    if(x%2 == 0){
        s +=x;
    }

    n1 = x;
    
    while(n1 >=10){
        n1 /=10;
    }
    if (n1 ==3){
        pr3 *= x;
    }

    if(x %100 == 55){
        k55 += 1;
    }  
    
    n-=1;
}
printf("summa chetnih= %d \n", s);
printf("proizvedenie na 3= %d \n", pr3);
printf("piryadkovie  na 55= %d", k55);


return 0;
}