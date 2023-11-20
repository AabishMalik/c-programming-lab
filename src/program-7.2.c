// Program 7.2
//
// Showing matrix multiplication

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m1=3,n2=3;
    int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int B[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };

    int *C = malloc(sizeof(int) * m1 * n2);

    for (int m =0; m<m1; m++){
        for (int n=0; n<n2;n++){
            for (int i=0;i<n2; i++){
                *(C + (m*m1) + (n) ) += A[m][i] * B[i][n];
            }
        }
    }
    for (int m=0; m<m1; m++){
        for (int n=0; n<n2; n++){
            printf("%d ", *(C+ (m*m1) + (n)));
        }
        printf("\n");
    }
    free(C);
    return 0;
}
