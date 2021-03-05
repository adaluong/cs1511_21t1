// COMP1511 Tutorial Q2a
// Ada Luong March 2021

#include <stdio.h>

int main (void) {

    int i;

    while (i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}

/* WHAT'S WRONG WITH THE LOOP?
   Uninitialised counter i
*/