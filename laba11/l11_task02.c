#include <stdio.h>
#include <string.h>


struct address {
    char street[50];  
    char dom[10];    
    int kvart;    
};

struct date {
    int day;   
    int month;  
    int year; 
};

struct Person {
    char surname[50];     
    char name[50];        
    struct address addr;   
    struct date birth;    
};

int main() {
    struct Person people[5];
    
    struct date today;
    
    int i;  
    
    for (i = 0; i < 5; i++) {
        printf(" personazh %d\n", i+1);
        
        printf("familiya = ");
        scanf("%s", people[i].surname);
        
        printf("imya = ");
        scanf("%s", people[i].name);
        
        printf("adres  =\n");
        printf("ulitsa: ");
        scanf("%s", people[i].addr.street);
        
        printf("dom ");
        scanf("%s", people[i].addr.dom);
        
        printf("kvartira: ");
        scanf("%d", &people[i].addr.kvart);
        
        printf("data rozhdeniya  = ");
        scanf("%d %d %d", &people[i].birth.day, &people[i].birth.month, &people[i].birth.year);
        printf("\n");
    }
    
    printf(" data SEEGODNYA  ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);
    printf("\n");
    

    printf("a) HaPPY BIRTHDAY y \n");
    int den = 0;  
    
    for (i = 0; i < 5; i+=1) {
        if (people[i].birth.day == today.day && people[i].birth.month == today.month) {
            printf("%s %s prazdnuet  rozhdeniya\n", people[i].surname, people[i].name);
            den = 1;
        }
    }
    
    if (!den) {
        printf("net chela y kogo segodnya dr \n");
    }
    printf("\n");
    
    printf("b) VOZRAST KAZHDOGO CHELOVEKA \n");
    
    for (i = 0; i < 5; i++) {
        int age = today.year - people[i].birth.year;
        
        if (today.month < people[i].birth.month || (today.month == people[i].birth.month && today.day < people[i].birth.day)) {
            age--;
        }
        printf("%s %s = %d let\n", people[i].surname, people[i].name, age);
    }
    
    return 0;
}