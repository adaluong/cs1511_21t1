// COMP1511 Tutorial Q2b
// Ada Luong March 2021

#include <stdio.h>

int main (void) {

    int i = 0;
    int j = 1;

    while (j = 1 || i < 100) {
        printf("%d\n", i);
        i = i + 1;
        j = 2;
    }

    return 0;
}

/* WHAT'S WRONG WITH THE LOOP
   j = 1 is an assignment statement, not a comparison
*/