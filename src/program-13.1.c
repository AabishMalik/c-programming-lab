// Program 13.1
//
// program to read and write a file


#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "w");
    printf("Enter data: ");
    while((ch = getchar()) != '\n'){
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("file.txt", "r");
    printf("Data in file: ");
    while((ch = getc(fp)) != EOF){
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
