//
// Created by basis on 03/12/2020.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

struct stack {
    int head;
    int *values;
};

struct Paciente {
    char nome[100];
    unsigned int peso;
};

int push(unsigned int value, struct stack *target);

unsigned int peek(struct stack *stack);

struct stack *create_new_empty_stack();

#endif //DATASTRUCTURES_STACK_H
