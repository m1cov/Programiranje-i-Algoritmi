#include <stdio.h>

void simpleSort(int *lista, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (lista[i] > lista[j])
            {

                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

int main()
{

    int lista[6] = {1, 7, 5, -3, 2, 4};

    simpleSort(lista, 6);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", lista[i]);
    }

    return 0;
}