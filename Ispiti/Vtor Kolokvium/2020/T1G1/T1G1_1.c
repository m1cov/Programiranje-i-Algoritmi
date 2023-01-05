#include <stdio.h>
#include <stdlib.h>

int f(int *niza, int n)
{
    int x = n - 1;

    for (int i = 0; i < n - 1; i++)
    {

        if (*(niza + i) >= *(niza + i + 1))
        {

            if (*(niza + i) / *(niza + i + 1) >= 2)
            {
                *(niza + i + 1) = *(niza + i + 2);

                x--;
                i--;
            }
            else
                *(niza + 1 + i) += *(niza + i) - *(niza + i + 1) + 1;
        }
    }

    return x;
}

int main()
{

    int niza[100] = {1, 7, 6, 10, 11, 15, 20, 6, -2, 14};
    int n = 10;

    printf("Vnesi dolzina na nizata\n");
    scanf("%d", &n);

    printf("Vnesi gi elementite na nizata\n");
    for (int i = 0; i < n; i++)
        scanf("%d", (niza + i));

    n = f(niza, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}