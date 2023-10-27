// Program 6.3
//
// Sorting an array using linear sort


#include <stdio.h>

int main(){
    int arr[] = {12,44,231,-99,124,13,321};
    int len = sizeof(arr)/sizeof(int);
    printf("Array before sorting: [");
    for (int i=0; i<len-1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len-1]);
    
    for (int i=0;i<len-1;i++){
        for (int j=i+1; j<len;j++){
            if (arr[i] > arr[j]){
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    
    printf("Array after sorting: [");
    for (int i=0; i<len-1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len-1]);


    return 0;
}
