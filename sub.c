#include <monty.h>

/**Place the sub function alongside other opcode functions.
Call sub when the sub opcode is encountered in your instruction handling logic.
Additional Considerations:

Adapt the code based on your specific stack implementation and data types.
Thoroughly test the implementation with various input scenarios, including different stack lengths and values.
Consider potential overflow issues if dealing with numerical data types.**/

void sub(void) {
    if (head == NULL || head->next == NULL) {
        printf("L%d: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int difference = head->next->n - head->n;
    head->next->n = difference;
    pop();  // Remove the top element
}
