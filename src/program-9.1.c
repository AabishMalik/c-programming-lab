// Program 9.1
//
// Calculator using switch cases


#include <stdio.h>

int main(){
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("\n%d %d", &a, &b);
    printf("Enter the operator: ");
    scanf("\n%c", &op);
    switch(op){
        case '+':
            printf("The sum is %d\n", a+b);
            break;
        case '-':
            printf("The difference is %d\n", a-b);
            break;
        case '*':
            printf("The product is %d\n", a*b);
            break;
        case '/':
            printf("The quotient is %f\n", (float)a/b);
            break;
        case '%':
            printf("The remainder is %d\n", a%b);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
