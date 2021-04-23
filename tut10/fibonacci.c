// COMP1511 Tut09 - Recursion 
// A function which returns the nth fibonacci number
// Ada Luong, April 2021

#include <stdio.h>

int fibonacci_iterative(int n);
int fibonacci(int n);

int main(void) {

    int n;
    printf("What is your favourite number: ");
    scanf("%d", &n);

    int fib = fibonacci_iterative(n);
    printf("fibonacci number #%d is... %d\n", n, fib);

    fib = fibonacci(n);
    printf("fibonacci number #%d is... %d\n", n, fib);

    return 0;
}

// FIBONACCI SEQUENCE - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
//                            ^  ^

// Iterative approach
int fibonacci_iterative(int n) {

    int a = 0;
    int b = 1;

    int i = 0;
    while (i < n) {

        int new_b = a + b;

        a = b;
        b = new_b;

        i++;
    }

    return a;
}

// Recursive approach
int fibonacci(int n) {

    // What are the two base cases?
    // Next number is found by adding the two numbers before it

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }

}