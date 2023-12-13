// Program 8.1
//
// Program to perform string operations


#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Hello";
    char *str2 = ", World!";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
        
    printf("Strings: %s %s\nLength %d %d \n", str1, str2, len1, len2);
    strcat(str1, str2);
    printf("Concatinated string: %s\n", str1);
    printf("Comparing strings: %d\n", strcmp(str1, str2));
    char str3[20];
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);
    printf("String in uppercase: %s\n", strupr(str3));
    printf("String in lowercase: %s\n", strlwr(str3));
    printf("Reversed string: %s\n", strrev(str3));

    return 0;
}
