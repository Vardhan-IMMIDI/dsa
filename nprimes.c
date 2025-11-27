#include <stdio.h>

int prime (int n);

int main (void)
{
    int n = 100;
    printf("Primes: ");
    for (int i = 2; i <= n; i++)
    {
        if (prime(i))
        {
            printf("%i ", i);
        }
    }

    printf("\n");
}

int prime (int n)
{
    for (int i = 2; i < n; i ++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    } 

    return 1;
}