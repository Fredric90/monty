#include <monty.h>

/**ccess the Top Two Elements:

Use your stack implementation's methods to retrieve the top two elements.
Verify that the stack has at least two elements.
Perform the Multiplication:

Multiply the value of the second top element with the value of the top element.
Store the result back in the second top element.
Remove the Top Element:

Update the stack pointer or index to remove the top element.
If using dynamic memory, free the memory of the removed node.
Error Handling:

Print the specified error message and exit with EXIT_FAILURE if the stack is too short.**/

void mul(void) {
    if (head == NULL || head->next == NULL) {
        printf("L%d: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int product = head->next->n * head->n;
    head->next->n = product;
    pop();  // Remove the top element
}
