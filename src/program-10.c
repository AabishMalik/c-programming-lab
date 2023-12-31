// Program 10
//
// Program to differentiate between pass by value and pass by reference by swapping value
#include <stdio.h>

void swap_reference(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp; 
}
void swap_value(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a,b;
	printf("Enter numbers: ");
	scanf("\n%d %d", &a, &b);
	swap_value(a,b);
	printf("After swapping by value: a=%d, b=%d\n", a, b);
	swap_reference(&a,&b);
	printf("After swapping by reference: a=%d, b=%d\n", a, b);

	return 0;
}
