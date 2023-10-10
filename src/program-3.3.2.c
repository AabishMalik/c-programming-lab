// Program 3.3.2
//
// Area and Perimeter of a shape based on user choice (switch cases)

#include <stdio.h>
#include <math.h>

int main(){
    char inp;
    printf("Select shape (C)ircle, (S)quare or (R)ectangle : ");
    scanf("\n%c", &inp);

    float radius,side,length,breadth;
    switch (inp){
        case 'c': 
        case 'C':
            printf("Enter radius: ");
            scanf("\n%f", &radius);
            printf("Perimeter: %.2f units\nArea: %.2f sq.units\n", (22.0 * radius * 2.0)/7.0, (22.0 * powf(radius, 2) )/7.0 );
            break;

        case 's':
        case 'S':
            printf("Enter side: ");
            scanf("\n%f", &side);
            printf("Perimeter: %.2f units\nArea: %.2f sq.units\n", side * 4.0, powf(side,2));
            break;

        case 'r':
        case 'R':
            
            printf("Enter length and breadth: ");
            scanf("\n%f %f", &length, &breadth);
            printf("Perimeter: %.2f units\nArea: %.2f sq.units\n", 2*(length+breadth), length*breadth );
            break;
    }

    return 0;
}
