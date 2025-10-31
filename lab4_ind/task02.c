#include <stdio.h>
#include <cmath>
int main()
{
    const int n = 10;
    int a[n], b[n], k=0, g, max = -100000;
    
    for (int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i<n; i++){
    if (a[i]<=-3){
        b[i]=2+1.0/3;
    }
    if (a[i]>-3 && a[i]<3){
        b[i]=(-2 + a[i]*a[i]) * cos(M_PI * (a[i] - 1) / (2 * a[i]));
    }
     else{
        b[i]=((a[i]+3)/(a[i]-(1.0/(pow(a[i]-1, 3)))) * (a[i]/(-2+a[i])));
    }
    printf("x%d = %d and y%d = %d\n", i, a[i], i, b[i]);
    if (a[i]>0 && b[i]>0){
        k += 1;
    }
    if (b[i]> max){
        max = b[i];
        g=i;
    }
    printf("max(y) = %d and x = %d\n", max, g);
    printf("k = %d", k);
    }    



return 0;\
