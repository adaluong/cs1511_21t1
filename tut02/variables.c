// COMP1511 - Variables and Constants Demo
// Ada Luong, February 2021

#include <stdio.h>

#define MAX_WEIGHT 10

int main(void) {

    // declaring a variable int
    int number;
    
    // assigning a value to the variable
    number = 5;

    // printing a variable
    printf("the number is: %d\n", number);

    // printing a constant
    printf("the maximum weight of this machine is: %d\n", MAX_WEIGHT);

    return 0;
}

/* NOTES ON CONSTANTS
-- How does #define work
-- Why would we use #defines
*/