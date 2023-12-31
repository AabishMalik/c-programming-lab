// Program 2.3
//
// Program to calculate the euciledian distance between two points


#include <stdio.h>
#include <math.h>

int main(){
	float x1,y1, x2,y2;
	printf("Enter x1 y1: ");
	scanf("\n%f %f", &x1, &y1);

	printf("Enter x2 y2: ");
	scanf("\n%f %f", &x2, &y2);
	
	float distance = sqrtf( powf(x2 - x1, 2) + powf(y2 - y1, 2));
	printf("Distance between points: %.2f units\n", distance);

}
