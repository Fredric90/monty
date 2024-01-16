#include <monty.h>

/**Access the Top Two Elements:

Use your chosen stack implementation's methods to access the top two elements.
Check if the stack has at least two elements.
Swap the Elements:

Implement the logic for swapping their values.
Consider whether a temporary variable is needed for your stack structure.
Error Handling:

Print the specified error message and exit with EXIT_FAILURE if the stack is too short.**/

void swap(void) {
    if (head == NULL || head->next == NULL) {
        printf("L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int temp = head->n;
    head->n = head->next->n;
    head->next->n = temp;
}
