// Program 4.2
//
// Fibonacci sequence using for loop


#include <stdio.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf("\n%d", &num);

    int prev=0, curr=1, next=1;
    printf("0\n1\n");

    for (int i=1; i <= num; i++){
        printf("%d\n", prev+curr);
        
        next = prev+curr;
        prev = curr;
        curr = next;
    }
    return 0;
}
