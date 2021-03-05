// COMP1511 Tutorial Q3b
// Ada Luong March 2021

#include <stdio.h>

int main (void) {

    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}

/* WHAT'S WRONG WITH THE LOOP?
   Missing braces mean the while loop is only the first code statement
   The update statement (i = i + 1) isn't part of the loop despite the indent

   Fun fact: search up "apple ssl security bug braces"
*/