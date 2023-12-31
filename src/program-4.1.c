// Program 4.1
//
// Factorial of a number using For loop


#include <stdio.h>

int main(){
	int f = 1;
	int num;
	printf("Enter number: ");
	scanf("\n%d", &num);

	for(int i = 1; i <= num; i++)
		f *= i;
	
	printf("Factorial of %d: %d\n", num,f);
	return 0;
}
