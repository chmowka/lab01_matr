#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    char f_name[21], s_name[21], t_name[21];

    printf("Vvedite svoe imya familiu i otchestvo \n");

    printf("First name = ");
    scanf("%s", f_name);

    printf("Second name = ");
    scanf("%s", s_name);

    printf("Third name = ");
    scanf("%s", t_name);

    printf("a) %s %s %s \n", f_name, s_name, t_name);

    printf("b) %c.%c.%c.\n", s_name[0], f_name[0], t_name[0]);

    printf("c) ");
    
    for(int i = 0; s_name[i] != '\0'; i+=1) {
        printf("%c", toupper(s_name[i]));
    }
    
    printf(" %c.%c.\n", toupper(f_name[0]), toupper(t_name[0]));
    
    return 0;
}