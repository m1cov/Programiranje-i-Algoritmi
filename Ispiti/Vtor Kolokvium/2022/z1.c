#include <stdio.h>

int prost(int broj)
{

    for (int i = 2; i < broj; i++)
    {
        if (broj % i == 0)
            return 0;
    }

    return 1;
}

int rek(int *niza, int n)
{

    if (n <= 0)
        return 1;

    if (prost(niza[0]) == 0)
        return 0;

    return rek(niza + 2, n - 2);
}

int main()
{

    int niza1[] = {2, 8, 13, 12, 23, 20};
    int niza2[] = {1, 2, 2, 3, 5, 6, 8, 9};

    int z1 = rek(niza1, 6);
    int z2 = rek(niza2, 8);

    printf("%d %d", z1, z2);

    return 0;
}