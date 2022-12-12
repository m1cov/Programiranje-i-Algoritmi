#include <stdio.h>

int rek(int *niza, int n, int srv)
{

    if (n == 0)
        return 0;

    if (niza[0] > srv)
    {
        return 1 + rek(niza + 1, n - 1, srv);
    }
    else
        return 0 + rek(niza + 1, n - 1, srv);
}

int main()
{

    int n, srv = 0;
    int niza[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
        srv += niza[i];
    }

    srv /= n;
    printf("%d", rek(niza, n, srv));
}