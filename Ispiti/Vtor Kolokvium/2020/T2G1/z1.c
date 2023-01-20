#include <stdio.h>

int f(int *niza, int *n)
{
    int izbrisani = 0;
    int elementi = *n;
    int prov = 0;

    for (int i = 0; i < *n - 1; i++)
    {
    }

    return izbrisani;
}

int main()
{

    int nizapr[10] = {14, 12, 4, 2, 1, 1, 10, 12, 14, 22};
    //  int niza[100];
    int n = 10, izbrisani;

    /*     printf("Vnesi gi elementite na nizata\n");
        scanf("%d", &n);

        if (n > 100)
            return -1; */

    izbrisani = f(nizapr, &n);

    printf("%d", n);

    for (int i = 0; i < n; i++)
    {

        printf("%d ", nizapr[i]);
    }

    return 0;
}