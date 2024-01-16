#include <monty.h>

/**Access the Top Two Elements:

Use your stack implementation's methods to retrieve the top two elements.
Check if the stack has at least two elements.
Check for Division by Zero:

If the top element (divisor) is 0, print the error message and exit.
Perform Modulo Operation:

Calculate the remainder of the second top element (dividend) divided by the top element.
Store the result in the second top element.
Remove the Top Element:

Update the stack pointer or index to remove the top element.
If using dynamic memory, free the memory of the removed node**/

void mod(void) {
    if (head == NULL || head->next == NULL) {
        printf("L%d: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (head->n == 0) {
        printf("L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    int remainder = head->next->n % head->n;
    head->next->n = remainder;
    pop();  // Remove the top element
}
