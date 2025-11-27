#include <stdio.h>

int main (void)
{
    int a = 650;
    int b = 654;

    int n = (a < b) ? a : b;

    for (int i = n; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
                printf("GCD is %d\n", i);
                break;
        }
    }
}