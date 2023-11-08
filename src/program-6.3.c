// Program 6.3
//
// Searching an array using linear search


#include <stdio.h>

int main(){
    int arr[] = {12,44,231,-99,124,13,321};
    int len = sizeof(arr)/sizeof(int);
    printf("Array: [");
    for (int i=0; i<len-1; i++){
        printf("%d%s", arr[i], (i<len-2)?" ": "" );
    }
    printf("%d]\n", arr[len-1]);  
    
    int idx = -1;
    int val;
    printf("Enter value to search: ");
    scanf("\n%d", &val);
    for (int i=0;i<len;i++){
        if (arr[i] == val){
            idx = i;
            break;
        }
    }
    
    if(idx ==-1) printf("Value %d is located at index %d", val,idx);
    else printf("Value %d is not located in the array", val);
    return 0;
}
