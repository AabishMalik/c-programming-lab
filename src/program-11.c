// Program 11
//
// Program to demonstrate the use of malloc, calloc, realloc and free functions.


#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr;
	int n, i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n * sizeof(int));
	if(ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{
		printf("Memory successfully allocated using malloc.\n");
		for(i = 0; i < n; i++){
			ptr[i] = i + 1;
		}
		printf("The elements of the array are: ");
		for(i = 0; i < n; i++){
			printf("%d ", ptr[i]);
		}
		printf("\n");
		ptr = realloc(ptr, 2 * n * sizeof(int));
		printf("Memory successfully re-allocated using realloc.\n");
		for(i = n; i < 2 * n; i++){
			ptr[i] = i + 1;
		}
		printf("The elements of the array are: ");
		for(i = 0; i < 2 * n; i++){
			printf("%d ", ptr[i]);
		}
		printf("\n");
		free(ptr);
		printf("Malloc memory successfully freed.\n");
	}
	return 0;
}
