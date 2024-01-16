#include <monty.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    // ... (rest of your program logic)
}

void handle_instruction(char *opcode, int line_number) {
    if (strcmp(opcode, "push") == 0) {
        // Handle push instruction
    } else if (strcmp(opcode, "pall") == 0) {
        // Handle pall instruction
    } else {
        printf("L%d: unknown instruction %s\n", line_number, opcode);
        exit(EXIT_FAILURE);
    }
}
