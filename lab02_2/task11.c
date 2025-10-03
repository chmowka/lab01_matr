#include <stdio.h>

int main() {
    int  bd, bm, by;
    int nd, nm, my;
    int let;
    
    printf("дата  рождения = ");
    scanf("%d %d %d", &bd, &bm, &by;
    
    printf("сегодняшняя дата =  ");
    scanf("%d %d %d", &nd, &nm, &ny);
    
    let = ny - by;
    
    if (nm < bm || (nm == bm && nd< bd)) {
        let--;
    }
    
    printf("Ваш возраст: %d лет\n", let);
    
    return 0;
}
