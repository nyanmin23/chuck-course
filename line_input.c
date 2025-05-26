#include <stdio.h>

int main(void)
{
    char line[1000];
    printf("Enter line\n");
    // The format string %[^\n] reads everything until a newline
    scanf("%[^\n]1000s", line); // Read a line of input
    printf("Line: %s\n", line); // Print the line
    return 0;
}