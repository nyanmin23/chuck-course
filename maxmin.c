#include <stdio.h>

int main(void)
{
    int first = 1;
    int val, maxVal, minVal;

    while(scanf("%i", &val) != EOF)
    {
        if (first || val > maxVal)
            maxVal = val;
        if (first || val < minVal)
            minVal = val;
        first = 0;
    }

    printf("Maximum: %i\n", maxVal);
    printf("Minimum: %i\n", minVal);
    return 0;
}