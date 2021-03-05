// Program to print "hello" 10 times using a while loop
// Ada Luong March 2021

#include <stdio.h>
int main (void) {
    
    int counter = 0;
    while (counter < 10) {
        
        printf("hello\n");

        counter = counter + 1; 
        // means the same thing as counter++;
    }

    return 0;
}

/* Things to note
- When does a while loop stop running?
- The 3 most important things that should happen in (almost) every while loop
    1. Initialising the counter
    2. Having a condition
    3. Incrementing the counter
- Uninitialized value error
- Infinite loops yikes
*/