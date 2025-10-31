#include <stdio.h>

int main() {
    int num[15];
    
    // Ввод массива с клавиатуры
    printf("num [0; 90] =  \n");
    for(int i = 0; i < 15; i +=1) {
        printf("num[%d] = ", i);
        scanf("%d", &num[i]);
    }
    
    
    // a) Вывод всего массива
    printf("a) all num = ");
    for(int i = 0; i < 15; i+=1) {
        printf("%d ", num[i]);
    }
    
    
    // b) Элементы с индексами, кратными 2 (четные индексы)
    printf("CHETNIE \n");
    for(int i = 0; i < 15; i += 2) {
        printf("num[%d] = %d\n", i, num[i]);
    }
    printf("\n");
    
    // c) num > 50
    int num50 = 0;
    for(int i = 0; i < 15; i+=1) {
        if(num[i] > 50) {
            num50 +=1;
        }
    }
    printf("c) kol-Vo  num > 50=  %d \n", num50);
    
    // d) Sum kratno 3
    int sumk3 = 0;
    for(int i = 0; i < 15; i+=1) {
        if(num[i] % 3 == 0) {
            sumk3 += num[i];
        }
    }
    printf("d) Summa num kratni3: %d\n", sumk3);
    
    // e) Min num pru num >  50
    int min50 = 100; // начальное большое значение
    int mini50 = -1;
    
    for(int i = 0; i < 15; i++) {
        if(num[i] > 50) {
            if(num[i] < min50) {
                min50 = num[i];
                mini50 = i;
            }
        }
    }
    
    if(mini50 != -1) {
        printf("e) min 50 num[%d] = %d\n\n", mini50, min50);
    } else {
        printf("e) not num > 50\n");
    }
    
    // f) new array  I cdvig  na 2 index
    int newnum[15];
    
    for(int i = 0; i < 15; i+=1) {
        newnum[(i + 2) % 15] = num[i];
    }
    
    printf("f) num posle cdviga: ");
    for(int i = 0; i < 15; i+=1) {
        printf("%d ", newnum[i]);
    }
    printf("\n");
    
    return 0;
}
