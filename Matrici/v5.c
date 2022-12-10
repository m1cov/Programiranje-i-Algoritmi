#include <stdio.h>
int main()
{

    int n, p = 1;
    int mat[100][100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mat[i][j] != mat[j][i])
                p = 0;
        }
    }

    if (p)
        printf("DA");
    else
        printf("NE");
}