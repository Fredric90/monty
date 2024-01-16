#include <monty.h>

/**Access Top Element:

Use your stack implementation's methods to retrieve the top element.
Check if the stack is empty and handle it appropriately.
Check Value Range:

Ensure the value is within the printable ASCII range (0-127).
Print an error message and exit if it's out of range.
Print Character:

Cast the integer value to a char to retrieve the corresponding ASCII character.
Print the character followed by a newline.**/

void pchar(void) {
    if (head == NULL) {
        printf("L%d: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    int value = head->n;
    if (value < 0 || value > 127) {
        printf("L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", (char)value);
}
