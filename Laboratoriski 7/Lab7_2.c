#include <stdio.h>
#define max 100

int main()
{

    int n, m;
    int a[max][max], b[max][max];

    printf("Vnesi ja goleminata na matricite\n");
    scanf("%d %d", &n, &m);

    if (n > max || m > max)
        return -1;

    printf("Vnesi ja prvata matrica\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Vnesi ja vtorata matrica\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int br = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == b[i][j])
            {
                br++;
                printf("Imaat isti elementi na pozicijata %d %d i elementot e %d \n", i, j, a[i][j]);
            }
        }
    }
    printf("Imaat %d isti elementi", br);

    return 0;
}