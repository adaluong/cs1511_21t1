// Author: Dean Wunder (d.wunder@unsw.edu.au)
// Using a stack to match brackets

#include <stdio.h>
#include "stack.h"

#define TRUE  1
#define FALSE 0

int opening_bracket(int bracket);
int closing_bracket(int bracket);
int brackets_match(int opening, int closing);

int main(int argc, char *argv[]) {
    
    char *bracket = argv[1];

    Stack stack = create_stack();

    int i = 0;
    int valid = TRUE;

    while (bracket[i] != '\0' && valid == TRUE) {

        if (opening_bracket(bracket[i])) {
            stack_push(stack, bracket[i]);
        } 
        
        if (closing_bracket(bracket[i])) {

            if (stack_size(stack) == 0) {
                valid = FALSE;

            } else {
                char bracket_from_stack = stack_pop(stack);
                if (!brackets_match(bracket_from_stack, bracket[i])) {
                    valid = FALSE;
                }
            }
        }        

        i++;
    }

    // If there are still brackets left on the stack, then they don't have a 
    // matching closing bracket

    if (stack_size(stack) != 0 || valid == FALSE) {
        printf("Invalid bracket sequence!\n");
    
    } else {
        printf("All brackets match!\n");
    }

    free_stack(stack);
    
    return 0;
}

int opening_bracket(int bracket) {
    if (bracket == '(' || bracket == '{' || bracket == '[') {
        return 1;
    }
    return 0;
}

int closing_bracket(int bracket) {
    if (bracket == ')' || bracket == '}' || bracket == ']') {
        return 1;
    }
    return 0;
}

int brackets_match(int opening, int closing) {
    if (opening == '(' && closing == ')') {
        return 1;
    }
    if (opening == '{' && closing == '}') {
        return 1;
    }
    if (opening == '[' && closing == ']') {
        return 1;
    }
    return 0;
}