// Program 6.2
//
// Sort an array using bubble sort

#include <stdio.h>

int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("\n%d", &n);
	int array[n];
	
	for (int i=0; i<n; i++){
		printf("Enter element %d: ", i+1);
		scanf("\n%d", &array[i]);
	} 
	for (int i=0; i< n-1; i++){
		for (int j=0; j<n-1;j++){
			if (array[j] > array[j+1]){
				int t = array[j];
				array[j] = array[j+1];
				array[j+1] = t;
			}
		}
	}
	
	printf("Sorted Array: ");
	for (int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
