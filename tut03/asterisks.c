// Program to print an asterisk the amount of times given by the user
// Each on a new line
// Ada Luong March 2021

#include <stdio.h>

int main(void) {

    // 1. Scan the number of asterisks we want to print
    int asterisks_number;
    printf("How many asterisks: ");
    scanf("%d", &asterisks_number);

    // 2. Write a while loop to print it
    int counter = 0;
    while(counter < asterisks_number) {
        printf("*\n");
        counter = counter + 1;
    }


    return 0;
}


/* Things to keep note of
 - scanf revision: scanf("%d", &variable name)
 - Three parts of the while loop
 - Printing vertically vs horizontally 
*/