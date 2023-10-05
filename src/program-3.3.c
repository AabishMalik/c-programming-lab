// Pragoram 3.3
//
// Calculate area and perimeter of a circle, square and rectangle based on user choice


#include <stdio.h>
#include <math.h>

int main(){
    char choice;
    printf("Select shape (C)ircle, (S)quare or (R)ectangle : ");
    scanf("\n%c", &choice);
    
    if (choice == 'C' || choice == 'c'){
        float radius;
        printf("Enter radius: ");
        scanf("\n%f", &radius);
        printf("Perimeter: %.2f units\nArea: %.2f sq.units\n", (22.0 * radius * 2.0)/7.0, (22.0 * powf(radius, 2) )/7.0 );

    }else if (choice == 'S' || choice == 's'){
        float side;
        printf("Enter side: ");
        scanf("\n%f", &side);
        printf("Perimeter: %.2f units\nArea: %.2f sq.units\n", side * 4.0, powf(side,2));

    }else if(choice == 'R' || choice == 'r'){
        float length,breadth;
        printf("Enter length and breadth: ");
        scanf("\n%f %f", &length, &breadth);
        printf("Perimeter: %.2f units\nArea: %.2f sq.units\n", 2*(length+breadth), length*breadth );

    }

    return 0;
}



