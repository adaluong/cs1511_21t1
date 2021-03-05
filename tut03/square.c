// Program to print an asterisk the amount of times given by the user
// but this time as a square

// Ada Luong March 2021

#include <stdio.h>

int main(void) {

    // 1. Scan the size of the square we want to print
    int square_size;
    printf("What size do you want your square: ");
    scanf("%d", &square_size);

    int row = 0;
    while(row < square_size) {

        // Ensure this second col counter is inside the while loop
        // so it resets to 0 each time we go through the first while loop
        int col = 0;
        while (col < square_size) {
            printf("*");

            col = col + 1;
        }

        printf("\n");
        row = row + 1;
    }


    return 0;
}