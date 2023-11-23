// Program 8.1
//
// Program to perform string operations


#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(){
    char str1[20] = "Hello";
    char *str2 = ", World!";
    strcat(str1, str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("Strings: %s %s\nLength %d %d \n", str1, str2, len1, len2);
    printf("Concatinated string: %s\n", str1);
    printf("Comparing strings: %d\n", strcasecmp(str1, str2));
    return 0;
}
