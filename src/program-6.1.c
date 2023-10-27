// Program 6.1
//
// find the maximum element and index in the array


#include <stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("\n%d", &n);
    int array[n];
    for (int i=0; i<n;i++){
        printf("Enter element at index %d: ", i);
        scanf("\n%d", &array[i]);
    }
    int max_n = array[0];
    int max_i = 0;
    for (int i=1; i<n; i++){
        if (array[i] > max_n){
            max_n = array[i];
            max_i = i;
        }
    }
    printf("Maximum element:%d\nAt Index:%d\n", max_n, max_i);
    return 0;
}
