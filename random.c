#include <stdio.h>

int main(void)
{
    // Print a random number between 0 and 9
    printf("%d\n", rand() % 10);
    
    // Print a random number between 1 and 6
    printf("%d\n", (rand() % 6) + 1);
    
    // Print a random number between 50 and 100
    printf("%d\n", (rand() % 51) + 50);
    
    return 0;
}
