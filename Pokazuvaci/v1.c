#include <stdio.h>
#define max 100

void f(int a[], int n, int *start, int *length)
{
    int sl = 0, ll = 1;

    *start = 0, *length = 1;
    for (int i = 0; i < n - 1; i++)
    {
        sl = i, ll = 1;

        while (i < n - 1 && a[i] < a[i + 1])
        {
            ll++;
            i++;
        }

        if (ll > *length)
        {
            *length = ll;
            *start = sl;
        }
    }
}

int main()
{

    int n, start = 0, length = 1;
    int niza[max];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    f(niza, n, &start, &length);
    printf("%d %d", start, length);
    return 0;
}