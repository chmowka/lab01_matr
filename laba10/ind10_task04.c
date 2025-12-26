#include <stdio.h>

int main() {
    char text[200];
    int i = 0;
    int skobka = 0;
    
    printf("Tekst =  ");
    fgets(text, 200, stdin);
    
    printf("\nNew tekst = ");
    
    while (text[i] != '\0') {
        if (text[i] == '(') {
            printf("{");
            skobka+=1;
        }
        else if (text[i] == ')') {
            printf("}");
            skobka+=1;
        }
        else {
            printf("%c", text[i]);
        }
        i+=1;
    }
    
    printf("kol-vo zamenennih skobok =  %d\n", skobka);
    
    return 0;
}