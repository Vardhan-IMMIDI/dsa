#include <stdio.h>

int prime (int n);

int main (void)
{
    if (prime(17))
    {
        printf("17 is prime number\n");
    }
    else
    {
        printf("17 is not a prime number\n");
    }
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