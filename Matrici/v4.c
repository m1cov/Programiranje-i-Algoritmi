#include <stdio.h>
#define max 100
int main()
{

    int mat[max][max];
    int n, sum;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    int p = 1;
    for (int i = 0; i < n - 1; i++)
    {
        sum = 0;
        int j;
        for (j = 0; i + j < n - 1; j++)
        {
            sum += mat[i][j];
        }

        if (sum != mat[i][j])
            p = 0;
    }

    if (p == 1)
        printf("matricata go zadovoluva uslovot\n");
    else
        printf("Matricata ne go zadovoluva uslovot\n");

    return 0;
}