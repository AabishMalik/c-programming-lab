// Program 7.1
//
// Printing a two dimensional array

#include <stdio.h>

int main(){
    int A[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(A[0])/sizeof(A[0][0]);
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
