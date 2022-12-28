#include <stdio.h>

void insertionSort(int *a[], int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        for (int j = i; j > 0 && a[j - 1] > temp; j--)
        {
            a[j] = a[j - 1];
        }
    }
}

int main()
{
}