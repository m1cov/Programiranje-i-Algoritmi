#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int niza[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }
    int maxR = 0, r;

    maxR = abs(niza[0] - niza[1]);

    for (int i = 1; i < n - 1; i++)
    {
        r = abs(niza[i] - niza[i + 1]);

        if (r >= maxR)
            maxR = r;
    }
    printf("%d", maxR);
    return 0;
}