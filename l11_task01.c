#include <stdio.h>
#include <string.h>

double f1(double a, double a2, double b, double b2){
    double min = 0;
    double s1 = a * a2;
    double s2 = b * b2;
    if(s1 < s2){
        min = s1;
    }else{
        min = s2;
    }
    return min;
}

 
struct stady
{
    char street[50];
    int num_street;
    double area;
    double money;
};
 
int main(void) {
    struct stady ucheba;
    // printf("Address =");
    // scanf("%s", &ucheba.street);
    // printf("DOM =");
    // scanf("%d", &ucheba.num_street);
    // printf("S doma =");
    // scanf("%lf", &ucheba.area);
    // printf("Money =");
    // scanf("%lf", &ucheba.money);
    strcpy(ucheba.street, "Kremlevskaya");
    ucheba.num_street = 18; 
    ucheba.area =200.0;
    ucheba.money = 10000.0;
    printf(" %s ,  %d , %.1lfm2 , %.1lf rub./m2", ucheba.street, ucheba.num_street, ucheba.area,ucheba.money);
    
    printf("\n");

    struct stady ucheba2;
    printf("Address =");
    scanf("%s", &ucheba2.street);
    printf("DOM =");
    scanf("%d", &ucheba2.num_street);
    printf("S doma =");
    scanf("%lf", &ucheba2.area);
    printf("Money =");
    scanf("%lf", &ucheba2.money);
    // strcpy(ucheba2.street, "Moskovskaya");
    // ucheba2.num_street = 304; 
    // ucheba2.area =300.0;
    // ucheba2.money = 1000.0;
    // printf(" %s  , %d , %.1lfm2 , %.1lf rub./m2", ucheba2.street, ucheba2.num_street, ucheba2.area,ucheba2.money);

    printf("\n");
    
     if (f1(ucheba.money, ucheba.area, ucheba2.money, ucheba2.area) == (ucheba.money * ucheba.area)){
        printf(" %s ,  %d , %.1lfm2 , %.1lf rub./m2 \n ", ucheba.street, ucheba.num_street, ucheba.area,ucheba.money);
     }else{
        printf("%s  , %d , %.1lfm2 , %.1lf rub./m2 \n ", ucheba2.street, ucheba2.num_street, ucheba2.area,ucheba2.money);
     }
    return 0;
}
