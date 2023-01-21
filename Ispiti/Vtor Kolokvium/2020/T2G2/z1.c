#include <stdio.h>

int f(int *niza, int *n)
{
    int ima;
    int izbrisani = 0;
    int j;
    for (int i = 0; i < *n - 1; i++)
    {
        ima = 0;
        for (j = i + 1; j < *n; j++)
        {
            if (*(niza + i) == *(niza + j))
            {

                ima = 1;
                break;
            }
        }

        if (!ima)
        {
            for (int z = i; z < *n; z++)
                *(niza + z) = *(niza + z + 1);

            izbrisani++;
            i -= 1;
        }
    }

    *n -= izbrisani;

    return izbrisani;
}

int main()
{

    int pr[10] = {14, 12, 4, 2, 1, 1, 10, 12, 14, 22};
    int n = 10, izbrisani;
    int niza[100];

    printf("Vnesi dolzina na nizata\n");
    scanf("%d ", &n);

    if (n > 100)
        return -1;

    printf("Vnesi ja nizata\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", niza + i);
    }

    izbrisani = f(niza, &n);

    printf("%d \n", izbrisani);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", pr[i]);
    }

    return 0;
}