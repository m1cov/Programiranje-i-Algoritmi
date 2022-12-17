#include <stdio.h>
#define max 100

void f(int *niza, int n, int *najgolem, int *najmal)
{

    *najmal = *niza;
    *najgolem = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(niza + i) > *najgolem)
            *najgolem = *(niza + i);
        else if (*(niza + i) < *najmal)
            *najmal = *(niza + i);
    }
}

int main()
{

    int niza[max];
    int n, najgolem = 0, najmal;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (niza + i));
    }

    f(niza, n, &najgolem, &najmal);

    printf("%d %d", najgolem, najmal);

    return 0;
}