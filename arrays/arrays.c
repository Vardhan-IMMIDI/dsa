#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    printf("");
}

int min (int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int min (int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}

int sum (int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int avg (int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum / n;
}

bool linear_search (int arr[], int key)
{
    int n = sizeof(arr) / size(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}
