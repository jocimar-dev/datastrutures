//
// Created by basis on 03/12/2020.
//
#include <stdlib.h>

#include "stack.h"

unsigned int peek(struct stack *stack) {
    if (stack->head == -1) {
        exit(-1);
    }

    return stack->values[stack->head];
}

int push(unsigned int value, struct stack *target) {
    if (target->head <= 98) {
        int index = target->head;
        index = index + 1;
        target->values[index] = value;
        target->head = index;
        return 0;
    }

    return -1;
}

struct stack *create_new_empty_stack() {
    struct stack *new_stack = malloc(sizeof(struct stack *));
    new_stack->head = -1;
    new_stack->values = malloc(sizeof(unsigned int) * 100);
    return new_stack;
}
