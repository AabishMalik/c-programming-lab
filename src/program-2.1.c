// Pragoram 2.1
//
// Basic Arithmetic operators

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d", a, b, a+b);
    printf("%d - %d = %d", a, b, a-b);
    printf("%d * %d = %d", a, b, a*b);
    printf("%d / %d = %d", a, b, a/b);
    printf("%d %% %d = %d", a, b, a%b);
    
    return 0;
}
