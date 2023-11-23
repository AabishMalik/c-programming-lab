// Program 8.2
//
// Program to check if a string is a palindrome or not


#include <stdio.h>
#include <string.h>

int main(){
    char str[201];
    printf("Enter string: ");
    scanf("\n%200s", str);
    int i=0, j = strlen(str)-1;
    int isPali = 1;
    while(i<j){
        if (str[i] != str[j]){
            isPali = 0;
            break;
        }
        i++; j--;
    }
    if (isPali) printf("%s is palindrome \n", str);
    else printf("%s is not palindrome \n", str);
    return 0;
}
