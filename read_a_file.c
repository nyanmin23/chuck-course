#include <stdio.h>

int main(void)
{
    char line[1000];
    FILE *hand;
    hand = fopen("romeo.text", "r");
    if (hand == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    while(fgets(line, sizeof(line), hand) != NULL)
    {
        printf("%s", line);
    }
    printf("\n");

    // Close the file
    fclose(hand);
    return 0;
}