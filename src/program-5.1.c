// Program 5.1
//
// Check if number is prime of not using while loop


#include <stdio.h>


int main(){
	int n,i=2;
	int is_prime=1;
	printf("Enter number: ");
	scanf("\n%d", &n);
	while (i<n/2 && is_prime){
		if (n%i ==0) is_prime=0;
		i++;
	}

	if (is_prime) printf("%d is Prime\n", n);
	else printf("%d is not Prime\n", n);
	return 0;
}
