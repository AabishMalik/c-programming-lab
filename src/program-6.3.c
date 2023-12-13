// Program 6.3
//
// Searching an array using linear search


#include <stdio.h>

int main(){
    int arr[] = {23,33,12,45,7,11,87,01};
    int len = sizeof(arr)/sizeof(int);
    printf("Array: [");
    for (int i=0; i<len; i++){
        printf("%d%s", arr[i], (i<len-1)?" ": "" );
    }
    printf("]\n");  
    
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
    
    if(idx != -1) printf("Value %d is located at index %d\n", val,idx);
    else printf("Value %d is not located in the array\n", val);
    return 0;
}
