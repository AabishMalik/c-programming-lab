// Program 3.1
//
// Check if a number is odd or even


#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf("\n%d",&num);
    
    if (num % 2 == 0){
        printf("%d is even\n", num);
    }else{
        printf("%d is odd\n", num);
    }

    return 0;
}
