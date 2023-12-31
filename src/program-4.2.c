// Program 4.2
//
// Fibonacci sequence using for loop


#include <stdio.h>

int main(){
	int num;
	printf("Enter number: ");
	scanf("\n%d", &num);

	int prev=0, curr=0, next=1;
	
	for (int i=1; i <= num; i++){
		printf("%d\n", curr);

		prev = curr;
		curr = next;
		next = prev + curr;
	}
	return 0;
}
