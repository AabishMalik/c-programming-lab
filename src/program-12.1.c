// Program 12.1
//
// store the information of n students using structures and find total marks of individual student.


#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[50];
	int roll;
	float marks[4];
};

int main(){
	struct student *ptr;
	int n, i, j;
	printf("Enter number of students: ");
	scanf("%d", &n);
	ptr = (struct student*)malloc(n * sizeof(struct student));
	for(i=0; i<n; i++){
		printf("Enter name of student %d: ", i+1);
		scanf("\n%[^\n]s", (ptr+i)->name);
		printf("Enter roll number of student %d: ", i+1);
		scanf("%d", &(ptr+i)->roll);
		printf("Enter marks of student %d: ", i+1);
		scanf("%f %f %f %f", &(ptr+i)->marks[0], &(ptr+i)->marks[1], &(ptr+i)->marks[2], &(ptr+i)->marks[3] );
	}
	for(i=0; i<n; i++){
		printf("Name of student %d: %s\n", i+1, (ptr+i)->name);
		printf("Roll number of student %d: %d\n", i+1, (ptr+i)->roll);
		printf("Total Marks of student %d: ", i+1);
		float sum = 0;
		for(j=0; j<4; j++) sum += (ptr+i)->marks[j];
		printf("%.2f\n", sum);
	}

	return 0;
}
