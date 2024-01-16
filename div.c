#include <monty.h>

/**Place the div function alongside other opcode functions.
Call div when the div opcode is encountered in your instruction handling logic.**/

void div(void) {
    if (head == NULL || head->next == NULL) {
        printf("L%d: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (head->n == 0) {
        printf("L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    int quotient = head->next->n / head->n;
    head->next->n = quotient;
    pop();  // Remove the top element
}
