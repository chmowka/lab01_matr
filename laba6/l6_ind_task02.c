#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <locale.h>


int main() {
   
    char *p1, *p2, *p3;
    
    
    p1 = (char*)malloc(100 * sizeof(char));
    p2 = (char*)malloc(100 * sizeof(char)); 
    p3 = (char*)malloc(100 * sizeof(char));
    
    
    printf("Vvedite stroku 1 ");
    scanf("%s", p1);
    printf("Vvedite stroku 2 ");
    scanf("%s", p2);
    printf("Vvedite stroku 3 ");
    scanf("%s", p3);
    
    printf("Vvedennye stroki   \n");
    printf("1: %s\n", p1);
    printf("2: %s\n", p2); 
    printf("3: %s\n", p3);
    
    free(p1);
    free(p2);
    free(p3);
    
    
    return 0;
}