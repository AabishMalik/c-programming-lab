// Program 2.1
//
// Basic Arithmetic operators

#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n", a, b, a%b);
	
	return 0;
}
