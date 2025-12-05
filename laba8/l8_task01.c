#include <stdio.h>

 
int zamena(int *a, int *b) {
    int c;  
    
    c = *a;  
    *a = *b;    
    *b = c;  
}

int main() {
   
    int v, p, k;  
    
    printf("Vvedite S doma Vasi= ");
    scanf("%d", &v);
    printf("Vvedite S doma Peti= ");
    scanf("%d", &p);
    printf("Vvedite S doma Koli= ");
    scanf("%d", &k);
    
    printf("Vasya= %d\n", v);
    printf("Petya =%d\n", p);
    printf("Kolya= %d\n", k);
    
    
    zamena(&v, &p);
    printf(" Posle obmena  Vasya=%d  Petya=%d, Kolya=%d\n", v, p, k);
    

    int arr[10];  

    printf("Vvedite 10  chisel= \n");
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    print("\n");
    printf("Ishodny massiv  ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i = i + 2) {
        zamena(&arr[i], &arr[i + 1]);
    }
    
    
    printf("Posle obmena ");
    for (int i = 0; i < 10; i+=1) {
        printf("%d ", arr[i]);
    }
  
    
    return 0;
}
