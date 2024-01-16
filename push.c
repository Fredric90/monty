#include <monty.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct stack_node {
    int n;
    struct stack_node *next;
} stack_node;

stack_node *head = NULL;

void push(char *arg) {
    int num;

    if (arg == NULL) {
        printf("L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    num = atoi(arg);

    stack_node *new_node = malloc(sizeof(stack_node));
    if (new_node == NULL) {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = num;
    new_node->next = head;
    head = new_node;
}

void pall(void) {
    stack_node *current = head;

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
    }
}
