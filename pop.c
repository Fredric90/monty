#include <monty.h>
/**Access the Top Element:

Use your chosen stack implementation's methods to retrieve the top element's pointer.
Check for an empty stack and handle it appropriately.
Remove the Top Element:

Update the stack's head pointer (for a linked list) or adjust the top index (for an array).
Free Memory (if applicable):

If using dynamic memory allocation, free the memory of the removed node.
Error Handling:

Print the specified error message and exit with EXIT_FAILURE if the stack is empty.**/

void pop(void) {
    if (head == NULL) {
        printf("L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_node *temp = head;
    head = head->next;
    free(temp);
}
