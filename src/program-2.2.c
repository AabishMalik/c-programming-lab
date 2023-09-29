#include <stdio.h>
#include <math.h>

int main(){
    float radius, side, length, breadth;
    printf("Enter radius of circle: ");
    scanf("\n%f", &radius);
    printf("Perimeter of circle: %.2f units \nArea of circle: %.2f sq. units\n", (2*22.0*radius)/7.0, (22.0/7.0) * powf(radius, 2) );

    printf("Enter side of square: ");
    scanf("\n%f", &side);
    printf("Perimeter of square: %.2f units\nArea of square: %.2f sq. units\n", 4 * side, side * side);

    printf("Enter length and breadth of rectangle: ");
    scanf("\n%f %f", &length, &breadth);
    printf("Perimeter of rectangle: %.2f units\nArea of rectangle: %.2f sq. units\n", 2*(length + breadth), length * breadth );

    return 0;
}
