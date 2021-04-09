# Week 8 Tutorial Notes

## Any questions from the lectures/lab/assignment?
* Today: structs, pointers to structs, linked lists (including malloc)

## Assignment 2
* [CS Beats](https://cgi.cse.unsw.edu.au/~cs1511/21T1/assignments/ass2/index.html)
* All about linked lists
* Assignment live stream yesterday

## What is a struct?
* A user defined data type
* Used to group different variables into a single type

## Defining a struct (see structs.c)
 * How to define a struct
   - Keyword "struct"
   - Name of the struct eg. "destination"
   - Variables that you want inside curly braces
   - Don't forget the semicolon at the end;
 * Like a function definition, the struct is defined outside of the main function 
 * No instance of it is being used until you declare the data type inside the main function 

## Structs in main.c
* Initialising a struct
  - Need to use strcpy for strings
  - See: https://stackoverflow.com/questions/6901090/c-why-is-strcpy-necessary
* Accessing fields (the variables) in a struct

## Structs in functions
* Create function ft. structs
  - You can return a struct
  - We generally use pointers
* Shorthand for derefencing a struct and accessing a field ->
  - (*struct_name.) is equivalent to (struct_name->)
* What happens when you return a pointer to a struct created in a function? (eg. return &canberra)
* Using **malloc** 
  - sizeof()
  - make sure you're mallocing the size of the struct, not the pointer to the struct
* dcc --leakcheck
  - For every malloc, there must be an equal and opposite free()
  - Don't use a pointer after it has been freed (google use-after-free vulnerabilities)
  
## Linked Lists (compared to arrays)
* Storing alllll our destinations
* Creating an array of destinations
* When should we use linked lists over arrays?
  - Don't need to know the size of the list in advance (can resize)
  - When we want to easily add/remove nodes
* Adding a pointer to another struct within the struct
* Now, we only need to pass around the head of the list
* Printing a linked list