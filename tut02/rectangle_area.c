// COMP1511 Wk 2 Tut Q10
// Write a program rectangle_area.c that scans in 2 integers which are the 
// side-length of a rectangle, and then prints the area of the rectangle.

#include <stdio.h>

int main (void) {

    // Declare your variables
    int length;
    int width;

    // Don't need a \n if you scanf afterwards
    printf("Please enter rectangle length and width: ");

    // Note: can scan in multiple variables in one scanf statement
    scanf("%d %d", &length, &width);

    // Print the area of the rectangle
    int area = length * width;
    printf("Area of the rectangle is %d\n", area);

    return 0;
}

/* THINGS TO THINK ABOUT
-- Scanning in two digits in one scanf(...)
-- What unexpected input might I want to check for? 
*/