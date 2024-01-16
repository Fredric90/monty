#include <monty.h>

/**Access the Top Two Elements:

Use your stack implementation's methods to retrieve the top two elements.
Verify that the stack has at least two elements.
Perform the Addition:

Add the values of the two elements.
Store the result in the second top element.
Remove the Top Element:

Update the stack pointer or index to remove the top element.
If using dynamic memory, free the memory of the removed node.
Error Handling:

Print the specified error message and exit with EXIT_FAILURE if the stack is too short.**/

void add(void) {
    if (head == NULL || head->next == NULL) {
        printf("L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int sum = head->n + head->next->n;
    head->next->n = sum;
    pop();  // Remove the top element
}
