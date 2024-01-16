#include <monty.h>

/**
While I cannot directly write code, I can provide guidance and a code snippet to assist you with implementing the pall opcode:

Key Steps:

Check for Empty Stack:

Use your stack implementation's methods to determine if the stack is empty.
If empty, don't print anything and return.
Iterate and Print:

Traverse the stack from top to bottom, printing each element's value on a new line.**/

void pall(void) {
    stack_node *current = head;

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
    }
}
