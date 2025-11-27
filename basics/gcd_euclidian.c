#include <stdio.h>

int gcd (int a, int b);

int main (void)
{
    printf("%d", gcd(650, 654));
}

int gcd (int a, int b)
{
    int x;
    if (b > a)
    {
        x = a;
        a = b;
        b = x;
    }

    x = a % b;
    if (x == 0)
    {
        return b;
    }

    return gcd(b, x);
}