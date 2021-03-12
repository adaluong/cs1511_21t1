// COMP1511 Tut04 Q10/11 - accessing element of array
// Ada Luong, March 2021

// Writing a function called firstPlusThird that sums the first and third 
// element of an array called numbers and returns the answer.

#include <stdio.h>

#define SIZE 5

int firstPlusThird(int numbers[SIZE]);

int main (void) {

    int numbers[SIZE] = {1,2,3,4,5};
    
    printf("the first plus third element is %d\n", firstPlusThird(numbers));
    
    return 0;
}

int firstPlusThird(int numbers[SIZE]) {
    int first_element = numbers[0];
    int third_element = numbers[2];

    int sum = first_element + third_element;

    return sum;
}

/* DISCUSSION (TUT Q10)

If an array is declared as int numbers[20]; and 
your program assigns a value to each element in the array, 
what's the problem with the statement x = numbers[20];?

*/