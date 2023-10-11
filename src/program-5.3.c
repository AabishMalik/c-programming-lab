// Program 5.3
//
// Check if a number is Armstrong or not using a while loop

#include <math.h>
#include <stdio.h>

int main(){
    int num, num1, sum=0, r, l=0;
    printf("Enter number: ");
    scanf("\n%d", &num);
    
    num1 = num;
    while(num>0) {
        l++;
        num /= 10;
    }
    num = num1;

    while(num>0){
        r = num%10;
        sum = sum + pow(r,l);
        num /= 10;

    }

    if (num1 == sum) printf("The given number is an armstrong number\n");
    else printf("The given number is not an armstrong number\n");
}
