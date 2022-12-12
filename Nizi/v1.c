#include <stdio.h>

int funk(int *niza, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (niza[i] >= niza[i + 1])
        {
            return 0;
        }
    }

    return 1;
}
int rek(int *niza, int n)
{

    if (niza[0] >= niza[1])
        return 0;

    if (n == 2)
        return 1;

    return rek(niza + 1, n - 1);
}
int main()
{

    int n;
    int niza[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    if (rek(niza, n))
        printf("Nizata e strogo rastecka");
    else
        printf("Nizata ne e strogo rastecka");
}