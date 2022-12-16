#include <stdio.h>
#define max 100

void f(int *niza, int *nn, int n)
{

    int br = 0;

    for (int i = 0; i < n; i++)
    {
        int j = 0;

        while (j < br && *(niza + j) != *(niza + i))
        {
            j++;
        }

        if (j == br)
        {
            *(niza + br) = *(niza + i);
            br++;
        }
    }

    *nn = br;
}

int main()
{

    int niza[max];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    f(niza, &n, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}