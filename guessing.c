#include <stdio.h>

int main(void)
{
    int guess;

    while (scanf("%i", &guess) != EOF)
    {
        if (guess < 42)
        {
            printf("Too low - guess again\n");
            continue;
        }
        if (guess > 42)
        {
            printf("Too high - guess again\n");
            continue;
        }
        else 
        {
            printf("Correct!\n");
            break;
        }
    }

    return 0;
}