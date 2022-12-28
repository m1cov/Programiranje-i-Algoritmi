#include <stdio.h>

void bubbleSort(int *a[], int n)
{

    int temp;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{

    return 0;
}