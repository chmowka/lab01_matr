#include <stdio.h>
#include <math.h>

int main(){
    int tort_r, tort_z, box_a, box_b, box_c;
    printf("Введите радиус и высоту торта =   \n");
    printf("радиус торта= "); scanf("%ld", &tort_r);
    printf("высота торта= "); scanf("%ld", &tort_z);

    printf("Введите стороны коробки торта =   \n");
    printf("введите 1 сторону коробки= "); scanf("%ld", box_a);
    printf("введите 2 сторону коробки= "); scanf("%ld", box_b);
    printf("введите высоту короьки  = "); scanf("%ld", box_c);

    if ((tort_r*2)+3 == (box_a*box_b) && (tort_z+3 == box_c)) {
            print("Торт уместится в коробку");
        } else{
           print("Торт  НЕ уместится в коробку");
        }
        
    }
return 0;
    

    

}

