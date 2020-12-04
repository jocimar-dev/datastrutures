#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stack.h"

int *incrementaUm(int *numero) {
    *numero += 1;

    return *numero;
}


void print_stack_values(struct stack *target) {
    int head = target->head;

    char *head_entry = "stack->values[%d] = **%d**\n";
    char *entry = "stack->values[%d] = %d\n";

    if (head == -1) {
        exit(-1);
    }

    if (head == 0) {
        printf(head_entry, head, target->values[head]);
        return;
    }

    for (int i = 0; i <= head; i++) {
        if (i == head) {
            printf(head_entry, i, target->values[i]);
            continue;
        }

        printf(entry, i, target->values[i]);
    }
}

int main() {
    struct stack *stack = create_new_empty_stack();
    bool x = false;
	int idade;
	printf("valor idade = %d\nendereço idade = %p\n", idade, &idade);

    push(75, stack);
    push(125, stack);

    print_stack_values(stack);
printf("informe a idade = ");	
	scanf("%d", &idade);
printf("valor idade = %d\nendereço idade = %p\n", idade, &idade)
;	
    
    int numero = 10;
    printf("numero = %d\n", numero);

    incrementaUm(&numero);

    printf("numero = %d\n", numero);

    return 0;
}




