
int main() {
    double num1, num2;
    int r;
    char x;
    
    printf("Введите первое число =  ");
    scanf("%lf", &num1);
  
    printf("Введите второе число =  ");
    scanf("%lf", &num2);
  
    printf("Введите операцию +  -  *  / ");
    scanf(" %c", &x);
    
    switch (x) {
        case '+':  r = num1 + num2; break;
        case '-':  r = num1 - num2; break;
        case '*':  r = num1 * num2; break;
        case '/': 
            if (num2 != 0) {
                r = num1 / num2;
            } else {
                printf("на ноль не делится \n");
            }
            break;
        default:
            printf("неверная операция\n");
            break;
    }
    

        printf("%.2f %c %.2f = %.2f\n", num1, x, num2, r);
    
    return 0;
}
