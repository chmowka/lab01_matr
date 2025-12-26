#include <stdio.h>

int main() {
    char word1[50], word2[50];
    char last_bukva;
    int  schet= 0, i=0, j =0;
    
    
    printf("Vvedite pervoe slovo: ");
    fgets(word1, 50, stdin);
    
    printf("Vvedite vtoroe slovo: ");
    fgets(word2, 50, stdin);
    
    while (word1[i] != '\0') {
        
        if (word1[i] == '\n') {
            word1[i] = '\0';
        }
        i+=1;  
    }
    
    last_bukva = word1[i-1]; 
   
    while (word2[j] != '\0') {
        
        if (word2[j] == '\n') {
            word2[j] = '\0';
        }
       
        if (word2[j] == last_bukva) {
            schet+=1;
        }
        j+=1;
    }
    
    printf("poslednyaya bukva pervogo slova  %c \n", last_bukva);
    printf("vstrechaetsya vo vtorom slove  %d raz\n", schet);
    
    return 0;
}