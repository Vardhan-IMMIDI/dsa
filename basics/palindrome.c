#include <stdio.h>

int main (void)
{
    int n = 121;
    
    int temp = n, rev = 0;

    while (temp)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }

    if (rev == n)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not Palindrome");
    }
}