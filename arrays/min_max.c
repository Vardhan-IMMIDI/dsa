#include <stdio.h>

int main (void)
{
    int a[] = {654, 68, 6, 0, 89, 20, 35};

    int max = a[0], min = a[0];

    int n = sizeof(a) / sizeof(1);
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max: %d, Min: %d", max, min);
}