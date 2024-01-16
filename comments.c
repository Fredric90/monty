#include <monty.h>

/**Identify Comment Lines:

When reading a line, check if the first non-whitespace character is #.
If it is, treat the entire line as a comment.
Ignore Commented Lines:

Do not process or execute the content of comment lines.
Simply move on to the next line.**/

while (fgets(line, sizeof(line), file) != NULL) {
    // Skip leading whitespace
    char *start = line;
    while (isspace(*start)) {
        start++;
    }

    if (*start == '#') {
        // Comment line, ignore it
        continue;
    }

    // Process non-comment line (e.g., parse opcodes)
    ...
}
