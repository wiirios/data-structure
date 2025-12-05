# Stack

Header file

``` C
#define MAX 6 // here you can define the size of stack

typedef struct stack stack_t;

stack_t *init();
void push(stack_t *stack, int value);
void pop(stack_t *stack);
int peek(stack_t *stack);
void getAll(stack_t *stack);
void free_stack(stack_t *stack);
```

All the functions and ther description

``` C 
// Init the Stack
stack_t *init();

// Adds a value to the stack passed as a parameter in the function
void push(stack_t *stack, int value);

// Remove the last value
void pop(stack_t *stack);

// Return the last value
int peek(stack_t *stack);

// Print all values
void getAll(stack_t *stack);

// Free the stack
void free_stack(stack_t *stack);
```