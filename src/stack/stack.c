#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct stack{
    int data[MAX];
    int top;
} stack_t;

stack_t *init() {
    stack_t *stack;
    stack = (stack_t*) malloc(sizeof(stack_t));

    if (stack == NULL) exit(EXIT_FAILURE);

    stack->top = 0;
    return stack;
}

void push(stack_t *stack, int value) {
    stack->data[stack->top] = value;
    stack->top++;
}

void pop(stack_t *stack) {
    if (stack->top == 0) exit(EXIT_FAILURE);

    stack->top--;
    stack->data[stack->top] = 0;
}

int peek(stack_t *stack) {
    return stack->data[stack->top - 1];
}

void getAll(stack_t *stack) {
    for (int i = 0; i < stack->top; i++) {
        printf("%d\n", stack->data[i]);
    }
}

void free_stack(stack_t *stack) {
    free(stack->data);
    free(stack);
}
