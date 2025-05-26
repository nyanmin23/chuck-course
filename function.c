#include <stdio.h>

int mymult(int a, int b);

int main(void)
{
    int retval;

    retval = mymult(5, 7);
    printf("Answer: %i\n", retval);
}

int mymult(int a, int b)
{
    return a * b;
}