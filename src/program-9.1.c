// Program 9.1
//
// Calculator using switch cases
#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

float div(int a, int b){
    return (float)a/b;
}

int mod(int a, int b){
    return a%b;
}

int main(){
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("\n%d %d", &a, &b);
    printf("Enter the operator: ");
    scanf("\n%c", &op);
    switch(op){
        case '+':
            printf("The sum is %d\n", add(a,b));
            break;
        case '-':
            printf("The difference is %d\n", sub(a,b));
            break;
        case '*':
            printf("The product is %d\n", mul(a,b));
            break;
        case '/':
            printf("The quotient is %f\n", div(a,b));
            break;
        case '%':
            printf("The remainder is %d\n", mod(a,b));
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
