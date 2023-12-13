// Program 13.2
//
// program for reading and writing student marks to a file


#include <stdio.h>

int main(){
    FILE *fp;
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n][4];
    fp = fopen("file.txt", "w");
    for(i=0; i<n; i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%d %d %d %d", &marks[i][0], &marks[i][1], &marks[i][2], &marks[i][3]);
        fprintf(fp, "%d %d %d %d\n", marks[i][0], marks[i][1], marks[i][2], marks[i][3]);
    }
    fclose(fp);
    fp = fopen("file.txt", "r");
    for(i=0; i<n; i++){
        fscanf(fp, "%d %d %d %d\n", &marks[i][0], &marks[i][1], &marks[i][2], &marks[i][3]);
        printf("Marks of student %d: %d %d %d %d\n", i+1, marks[i][0], marks[i][1], marks[i][2], marks[i][3]);
    }
    fclose(fp);
    
    return 0;
}
