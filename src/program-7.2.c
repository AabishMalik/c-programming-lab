// Program 7.2
//
// Showing matrix multiplication

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int B[3][3] = {
        {9,8,7},
        {6,5,4},
        {3,2,1},
    };
    int m1 = sizeof(A)/sizeof(A[0]);
    int n1 = sizeof(A[0])/sizeof(A[0][0]);
    int m2 = sizeof(B)/sizeof(B[0]);
    int n2 = sizeof(B[0])/sizeof(B[0][0]);
    
    if (m2 != n1){
        printf("The given matricies cannot be multiplied\n");
        exit(1);
    }

    int *C = malloc(sizeof(int) * m1 * n2);

    for (int m =0; m<m1; m++){
        for (int n=0; n<n2;n++){
            for (int i=0;i<n1; i++){
                *(C + (m*m1) + (n) ) += A[m][i] * B[i][n];
            }
        }
    }
    for (int m=0; m<m1; m++){
        for (int n=0; n<n2; n++){
            printf("%d%s", *(C+ (m*m1) + (n)) , (n<n2-1)? " ": "");
        }
        printf("\n");
    }
    free(C);
    return 0;
}
