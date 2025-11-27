#include <stdio.h>

int fact (int n);

int main (void)
{
    printf("Factorial of 8: %d", fact(8));
}

int fact (int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}