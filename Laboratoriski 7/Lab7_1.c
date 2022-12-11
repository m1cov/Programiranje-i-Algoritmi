#include <stdio.h>
#define max 100

int main()
{

    int n, m, br;
    int mat[max][max];
    float sr = 0;

    printf("Vnesi golemina na matricata\n");
    scanf("%d %d", &n, &m);

    if (n > max || m > max)
        return -1;

    br = m * n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {

            scanf("%d", &mat[i][j]);
            sr += mat[i][j];
        }

    sr /= br;
    br = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mat[i][j] > sr)
            {
                br++;
                printf("%d ", mat[i][j]);
            }

    printf("\n%d", br);

    return 0;
}
