#include <stdio.h>

int main()
{

    int m, n;
    int mat[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
    }
    int temp = mat[n - 1][m - 1];
    for (int k = m * n - 1; k > 0; k--)
    {
        mat[k / m][k % m] = mat[(k - 1) / m][(k - 1) % m];
    }

    mat[0][0] = temp;

    return 0;
}