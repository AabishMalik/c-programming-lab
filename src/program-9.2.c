// Program 9.2
//
// Program to print fibonacci series upto n terms using recursion

#include <stdio.h>

int fib(int n){
    if(n == 0 || n == 1)
        return n;

    else 
        return fib(n-1) + fib(n-2);
}

void printfib(int n){
    if (n == 0 || n == 1 ){
        printf("%d ", n);
    }
    else {
        printfib(n-1);
        printf("%d ", fib(n));
    }
}

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("\n%d", &n);
    printfib(n);
    printf("\n");
    return 0;
}
