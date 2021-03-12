// COMP1511 tut04 Q13 - functions and arrays demo
// Ada Luong, March 2021

// A function to store in each element of the array the square of the index
// of that element (eg. squres[5] would contain value 25)

#include <stdio.h>

#define ELEMENTS 15

void square_elements(int squares[ELEMENTS]);

int main (void) {

    int squares[ELEMENTS] = {};

    square_elements(squares);

    int i = 0;
    while (i < ELEMENTS) {
        printf("squares[%d] has the value %d\n", i, squares[i]);
        i = i + 1;
    }
    
    return 0;
}

void square_elements(int squares[ELEMENTS]) {

    int i = 0;
    while (i < ELEMENTS) {
        squares[i] = i * i;
        i = i + 1;

    }
    
}