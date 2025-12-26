#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    char stroka[30], new_stroka[30];
    int value_S = 0, value_s = 0, all_Ss = 0, all_num = 0, value_big =0;

    printf("Vvedite stroky =  ");
    scanf("%s", stroka);

    int i = 0;
    while (stroka[i] != '\0') {
        new_stroka[i] = stroka[i];
        i+=1;
    }
    
    new_stroka[i] = '\0';  
    
    i = 0;
    
    while (stroka[i] != '\0') {
        if (stroka[i] == 'S') {
            value_S = value_S + 1;
            all_Ss = all_Ss + 1;
        }
        if (stroka[i] == 's') {
            value_s = value_s + 1;
            all_Ss = all_Ss + 1;
        }
        
        if (stroka[i] >= '0' && stroka[i] <= '9') {
            all_num = all_num + 1;
        }
        
        if (stroka[i] >= 'A' && stroka[i] <= 'Z') {
            value_big = value_big + 1;
        }
        
        if (stroka[i] == '1') {
            new_stroka[i] = '5';
        }
        if (stroka[i] == 'a') {
            new_stroka[i] = 'A';
        }
        
        i = i + 1;  
    }

    printf("ishodnaya =  %s  \n", stroka);
    printf("kol-vo s =  %d  \n", value_s);
    printf("kol-vo S =  %d  \n", value_S);
    printf("kol-vo sS =  %d  \n", all_Ss);
    printf("kol-vo number =  %d  \n", all_num);
    printf("kol-vo big letters =  %d  \n", value_big);
    printf("New stroka =  %s  \n", new_stroka);
}