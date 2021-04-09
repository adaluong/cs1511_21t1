// COMP1511 Tut08 - Linked Lists
// Printing a linked list
// Ada Luong, April 2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define MAX_LENGTH 100

struct destination *create_struct(char name[MAX_LENGTH], double cost, int rating);

struct destination {
    char name[MAX_LENGTH];
    double cost;
    int rating;
    struct destination *next;
};

int main (void) {

    // CREATING A LINKED LIST
    // [SYDNEY] -> [TOKYO] -> [GENOVIA] -> X

    struct destination *sydney = create_struct("sydney", 300.00, 5);
    struct destination *tokyo = create_struct("tokyo", 300.00, 5);
    struct destination *genovia = create_struct("genovia", 300.00, 5);

    sydney->next = tokyo;
    tokyo->next = genovia;
    genovia->next = NULL;

    // PRINTING A LINKED LIST
    struct destination *current_node = sydney;
    while (current_node != NULL) {

        printf("%s -> ", current_node->name);

        current_node = current_node->next;   
    }

    return 0;
}

struct destination *create_struct(char name[MAX_LENGTH], double cost, int rating) {

    struct destination *new_destination = malloc(sizeof(struct destination));
    
    strcpy(new_destination->name, name);

    new_destination->cost = cost;
    new_destination->rating = rating;
    new_destination->next = NULL;
    
    return new_destination;
}