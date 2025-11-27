#include <stdio.h>

void fib (int n);
int helper (int n);

int main (void)
{
    fib(8);
}

void fib (int n)
{
    printf("Fibonacci upto %d elemets: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", helper(i));
    }
}

int helper (int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return helper(n - 1) + helper(n - 2);
}