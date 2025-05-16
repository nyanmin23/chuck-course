#include <stdio.h>

int main(void)
{
    char name[20];
    printf("Enter your name: ");
    scanf("%19s", name); // Limit input to 19 characters to prevent buffer overflow
    printf("Hello, %s!\n", name);
    return 0;
}