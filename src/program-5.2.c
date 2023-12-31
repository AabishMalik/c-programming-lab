// Program 5.2
//
// Calculate the sum of digits of a number using a while loop


#include <stdio.h>

int main(){
	int n,c, sum=0;
	
	printf("Enter numbers: ");
	scanf("\n%d", &n);
	c=n;
	while ( c>0 ) {
		sum += c%10;
		c /= 10;
	}
	
	printf("Sum of digits: %d\n", sum);
	return 0;
}
