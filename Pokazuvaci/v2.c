#include <stdio.h>
#define max 100

void f(int *niza, int n)
{

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {

        *(niza + i) += *(niza + j);
        *(niza + j) = *(niza + i);
    }
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

    f(niza, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", niza[i]);
    }
    

    return 0;
}