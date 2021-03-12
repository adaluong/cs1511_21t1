// This program determines if the year inputted by the user is a leap year
// using Wikipedia's Leap Year algorithm
// Written by Jawn Smith z5555555, 10/03/2020

#include <stdio.h>

int main (void) {

    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year < 0) {
        printf("Sorry, invalid year. Please enter again: ");
        scanf("%d", &year);
    }

    if (year % 400 != 0 && year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;

}