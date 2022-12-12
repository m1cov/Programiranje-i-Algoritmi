#include <stdio.h>

int funk(int *niza, int n)
{
    if (n <= 0)
        return 0;

    if (niza[0] % 2 == 0)
        return 1 + funk(niza + 2, n - 2);
    else
        return 0 + funk(niza + 1, n - 1);
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
    printf("%d", funk(niza, n));
}