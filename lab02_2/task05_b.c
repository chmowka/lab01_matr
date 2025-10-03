#include <stdio.h>
#include <math.h>

int main(){
    int otv_r, otv_z, kir_a, kir_b, kir_c;
    printf("Введите стороны отверстия =   \n");
    printf("1 сторона = "); scanf("%ld", &otv_r);
    printf("2 сторона = "); scanf("%ld", &otv_z);

    printf("Введите стороны кирпича и его высоту =   \n");
    printf("введите 1 сторону кирпича= "); scanf("%ld", kir_a);
    printf("введите 2 сторону кирпича= "); scanf("%ld", kir_b);
    printf("введите высоту кирпича= "); scanf("%ld", kir_c);

    if ((otv_r * otv_z) == (kir_a *kir_b) || (otv_r * otv_z) == (kir_a *kir_c) || (otv_r * otv_z) == (kir_c *kir_b)) {
            print("кирпич пройдёт в отверстие");
        } else{
           print("Кирпич НЕ пройдёт в отвнрстие");
        }
        
    }
return 0;
}
