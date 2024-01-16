#include <monty.h>

void pint(void) {
    if (head == NULL) {
        printf("L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", head->n);
}
