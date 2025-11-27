#include <stdio.h>
#include <stdbool.h>

void display (int arr[], int n);
void rotate (int arr[], int n, int by);


int main (void)
{
    int arr[] = {1, 2, 3, 4, 5};
    display(arr, 5);
    rotate(arr, 5, -3);
    display(arr, 5);
    rotate(arr, 5, 3);
    display(arr, 5);
    
}

void display (int arr[], int n)
{
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int max (int arr[], int n)
{
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

int min (int arr[], int n)
{
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

int sum (int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int avg (int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum / n;
}

bool linear_search (int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

bool binary_search (int arr[], int n, int key)
{
    int low = 0, high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
    }
    return false;
}

void rev (int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        arr[i] = arr[n - i - 1];
    }
}

void rotate (int arr[], int n, int by)
{
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int index = (i + by) % n;
        if (index < 0)
        {
            index = n + index;
        }
        arr[i] = temp[index];
    }
}