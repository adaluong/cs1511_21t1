// Program to print an asterisk the amount of times given by the user
// in a square and particular pattern

// Ada Luong March 2021

#include <stdio.h>

int main(void) {

    int square_size;
    printf("What size do you want your square: ");
    scanf("%d", &square_size);

    int row = 0;
    while(row < square_size) {

        int col = 0;
        while (col < square_size) {

            // Come up with a mathematical statement to create a pattern 
            if (row <= col) {
                printf("*");
            } else {
                printf("-");
            }

            col = col + 1;
        }

        printf("\n");
        row = row + 1;
    }


    return 0;
}