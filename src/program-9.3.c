// Program 9.3
//
// Program to calculate factorial using recursion

#include <stdio.h>

int factorial(int n){
    if (n==1 || n==0 ){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}


int main(){
    int n;
    printf("Enter number: ");
    scanf("\n%d", &n);
    printf("Factorial: %d\n", factorial(n));
    return 0;
}
