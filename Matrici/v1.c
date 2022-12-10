#include <stdio.h>
#define max 10
// Ogledalna transformacija na matrica
int main()
{

    int m, n;
    int mat[max][max];

    scanf("%d %d", &n, &m);

    if (n > max && m > max)
        return -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[n - 1 - i][j];
            mat[n - 1 - i][j] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}