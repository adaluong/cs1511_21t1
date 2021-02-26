// COMP1511 - If Statements Demo
// Ada Luong February 2021

#include <stdio.h>

int main(void) {

    int length = 11;

    // An example of chaining if and else if statements together
    if (length == 5) {
        printf("The length if 5!\n");
    } else if (length == 6) {
        // This only runs if the if statement is not true
        printf("The length is actually 6\n");
    } else {
        printf("The length is neither 5 or 6!\n");
    }

    // Using logical operators
    if (length >= 0 && length != 10) {
        printf("This is a positive length that's not 10\n");
    } 

    return 0;
}

/* NOTES ON IF STATEMENTS
-- Using == instead of =
-- Else statements (optional)
-- Chaining if and else if statements together
--> Why use else if instead of another if statement?
-- Operators for comparison: >, <, >=, <=, !=
-- Style Guide
-- Logical AND/OR Operators

*/