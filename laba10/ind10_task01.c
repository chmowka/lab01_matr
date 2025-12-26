#include <stdio.h>

int main() {
    char stroka[100], new_stroka[100];
    int i = 0,j = 0;
    
    printf("Vvedite stroku: ");
    fgets(stroka, 100, stdin);
    
    while (stroka[i] != '\0') {
        if (stroka[i] != ' ' &&  stroka[i] != '.' && stroka[i] != ',') {
            new_stroka[j] = stroka[i];
            j+=1;
        }
        i+=1;
    }
    new_stroka[j] = '\0';
    
    printf("Bez probelov: %s\n", new_stroka);
    
    return 0;
}