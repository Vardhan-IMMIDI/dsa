#include <stdio.h>

int main (void)
{
    int n = 2305;
    int rev = 0;
    while (n)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }

    printf("%d", rev);
}