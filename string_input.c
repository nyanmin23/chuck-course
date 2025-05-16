#include <stdio.h>

int main(void)
{
    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name); // Limit input to 19 characters to prevent buffer overflow
    printf("Hello, %s!\n", name);
    return 0;
}