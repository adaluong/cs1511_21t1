// COMP1511 Tut04 Q7 - Style 
// Program determines if a student is in high school given their current year. 
// Ada Luong, March 2021

#include <stdio.h>

#define FIRST_YEAR 7
#define FINAL_YEAR 12

int main(void) {

    int student_year;
    printf("What year are you in? ");
    scanf("%d", &student_year);

    if (student_year < FIRST_YEAR || student_year > FINAL_YEAR) {
        printf("You are not in high school\n");
        
    } else {
        printf("You are in high school\n");
    }

    return 0;
}

/* DISCUSSION QUESTIONS
-- What are the good qualities of the program?
-- What could be improved?
*/