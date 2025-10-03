#include <stdio.h>
#include <math.h>

int main(){

    int dM, dW;
    printf("Введите дату: \n");
    printf("День месяца: ");
    scanf("%d", &dM);
    printf("Номер дня в неделе");
    scanf("%d", &dW);

    if(13 == dM){
        if(5== dM){
        printf("Неудачый день");
        }
    } else{
        if(2 == dM){
        printf("Неудачый день");
        }
    }
     if (17 == dM){
        if (5 == dM){
        printf("Неудачый день");
        }
    }
    //////////// ИЛИ /////////
    if(13 ==dM){
        if(5 == dM || 2==dM){
        printf("Неудачый день");
        }
    }

    //////////  И /////////

    if((13==dM) &&(5 == dW || 2 == dW)){
        printf("Неудачый день");
    }
    

    if ((17 == dM)&& (5 == dM)){
        printf("Неудачый день");
    }

    return 0;
   
}