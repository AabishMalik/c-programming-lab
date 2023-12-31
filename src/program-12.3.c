// Program 12.3
//
// program to implement an array of a structure for student marks for each student and pass it to function for various operations.


#include <stdio.h>
#include <stdlib.h>

struct marks{
	float sub1;
	float sub2;
	float sub3;
	float sub4;
};

void display(struct marks *ptr, int n){
	int i;
	for(i=0; i<n; i++){
		printf("Marks of student %d: %.2f %.2f %.2f %.2f\n", i+1, (ptr+i)->sub1, (ptr+i)->sub2, (ptr+i)->sub3, (ptr+i)->sub4);
	}
}

void total(struct marks *ptr, int n){
	int i;
	for(i=0; i<n; i++){
		printf("Total marks of student %d: %.2f\n", i+1, (ptr+i)->sub1 + (ptr+i)->sub2 + (ptr+i)->sub3 + (ptr+i)->sub4);
	}
}

int main(){
	struct marks *ptr;    
	int n, i;
	printf("Enter number of students: ");
	scanf("%d", &n);
	ptr = (struct marks*)malloc(n * sizeof(struct marks));
	for(i=0; i<n; i++){
		printf("Enter marks of student %d: ", i+1);
		scanf("%f %f %f %f", &(ptr+i)->sub1, &(ptr+i)->sub2, &(ptr+i)->sub3, &(ptr+i)->sub4);
	}
	display(ptr, n);
	total(ptr, n);
	return 0;
}
