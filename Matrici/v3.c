#include <stdio.h>

int main()
{

    int m, n;
    int mat[10][10];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int p = 1, br = 0;
    for (int k = 0; k < m; k++)
    {
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == mat[0][k])
                {
                    p = 1;
                    break;
                }
            }

            if (p == 0)
                break;
        }
        if (p == 1)
        {
            br++;
            printf("%d ", mat[0][k]);
        }
    }

    if (br == 0)
        printf("Greska");
}