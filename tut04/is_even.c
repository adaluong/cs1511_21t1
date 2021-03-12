// COMP1511 Tut04 Q17 - Functions
// Ada Luong, March 2021

// Create a function called is_even which takes in an integer and
// returns 1 if it is an even number, and 0 if it is not.

#include <stdio.h>

#define EVEN        1
#define NOT_EVEN    0

int is_even (int number);

int main (void) {
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int check_even = is_even(num);

    printf("The return value for the is_even function is: %d\n", check_even);

    return 0;
}

int is_even (int number) {

    int is_even = NOT_EVEN;

    if (number % 2 == 0) {
        is_even = EVEN;
    }

    return is_even;
}

/* DISCUSSION POINTS
 * Defining a function: output (return type), name, input (parameters)
 * Curly brackets {} and return
 * Declaring a function prototype at the top -> "btw the function exists"
 * Calling a function: arguments, ()
 */
