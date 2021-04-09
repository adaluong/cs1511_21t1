// COMP1511 - Tut08
// Demonstration of structs
// Ada Luong, April 2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define MAX_LENGTH 100

struct destination {
    char name[MAX_LENGTH];
    double cost;
    int rating;
    struct destination *next;
};

void change_rating(struct destination *canberra);
struct destination create_struct_no_pointer(char *name, double cost, int rating);
struct destination *create_struct(char *name, double cost, int rating);

int main (void) {

    struct destination canberra = create_struct_no_pointer("canberra", 100.00, 0);
    printf("rating of canberra: %d\n", canberra.rating);

    struct destination *tokyo_destination = create_struct("tokyo", 1000.00, 100);
    printf("rating of tokyo: %d\n", tokyo_destination->rating);

    // Freeing memory allocated by create_struct
    free(tokyo_destination);

    return 0;
}

// Changing the rating field value with a void function
void change_rating(struct destination *canberra) {
    // (*canberra).rating = 0;
    canberra->rating = 0;
}

// Function which returns a destination struct initialised by certain
// parameters.
struct destination create_struct_no_pointer(char *name, double cost, int rating) {

    struct destination new_destination_struct;

    // Initialising the values of the struct
    new_destination_struct.cost = cost;
    new_destination_struct.rating = rating;
    strcpy(new_destination_struct.name, name);
    new_destination_struct.next = NULL;

    // Returning the struct itself
    return new_destination_struct;
}


// Function which returns a pointer to a destination struct initialised by certain
// parameters. This is preferred over returning the struct itself.
struct destination *create_struct(char *name, double cost, int rating) {

    // Declaring a variable of type struct destination and allocating 
    // it memory on the stack
    struct destination *new_destination_struct = malloc(sizeof(struct destination));

    // Initialising the values of the struct
    new_destination_struct->cost = cost;
    new_destination_struct->rating = rating;
    strcpy(new_destination_struct->name, name);
    new_destination_struct->next = NULL;

    // Returning a pointer to the struct
    return new_destination_struct;
}

