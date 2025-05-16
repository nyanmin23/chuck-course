#include <stdio.h>

int main(void)
{
    char line[1000];
    printf("Enter line: ");
    // fgets reads a line of input, including spaces, until a newline or EOF
    fgets(line, 1000, stdin);
    printf("Line: %s\n", line); // Print the line
    return 0;
}