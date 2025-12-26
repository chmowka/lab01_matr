#include <stdio.h>

int main() {
    char stroka[100];
    
    int words = 0;
    int value_s = 0;
    int in_word = 0;
    
    printf("Vvedite stroku   ");
    fgets(stroka, 100, stdin);

    int i = 0;

    while (stroka[i] != '\0') {
        if ((stroka[i] >= 'a' && stroka[i] <= 'z') || 
            (stroka[i] >= 'A' && stroka[i] <= 'Z')) {
            
            in_word = 1;
            
            if (stroka[i] == 's' || stroka[i] == 'S') {
                value_s+=1;
            }
        }
        else {
            if (in_word == 1) {
                if (value_s >= 2) {
                    words+=1;
                }
                value_s = 0;
                in_word = 0;
            }
        }
        i+=1;
    }
    
    if (in_word == 1 && value_s >= 2) {
        words+=1;
    }
    
    printf("Slov s dvumya ili bolee bukvami s = %d\n", words);
    
    return 0;
}