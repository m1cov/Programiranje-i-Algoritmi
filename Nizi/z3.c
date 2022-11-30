#include <stdio.h>

int main()
{

    float niza[100], nizb[100];
    int n;
    float suma = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &niza[i]);
        suma += niza[i];
    }

    suma /= n;
    int br = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] >= suma)
        {
            nizb[br] = niza[i];
            br++;
        }
    }

    for (int i = 0; i < br; i++)
    {
        printf("%.1f ", nizb[i]);
    }

    return 0;
}