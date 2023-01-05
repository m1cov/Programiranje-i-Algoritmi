#include <stdlib.h>
#include <stdio.h>

#define max 100

int main()
{
    int m, n, dolzina = 0;
    int mat[max][max];
    int mat1[3][3] = {1, 0, 1,
                      0, 0, 1,
                      0, 0, 0};

    int mat2[3][6] = {{1, 0, 1, 1, 1, 1},
                      {1, 1, 0, 1, 0, 0},
                      {0, 1, 0, 1, 0, 1}};

    printf("Vnesi ja goleminata na matricata\n");
    scanf("%d %d", &m, &n);

    if (m + n > max)
    {
        printf("Vneseni e gresna golemina");
        return -1;
    }

    printf("Vnesi gi elementite na matricata\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int temp = 0;
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
            if (mat[i][j] == 1)
            {
                temp++;
                if (temp > dolzina)
                    dolzina = temp;
            }
            else if (mat[i][j] == 0)
            {

                temp = 0;
            }
        }

        temp = 0;
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[j][i]);
            if (mat[j][i] == 1)
            {
                temp++;
                if (temp > dolzina)
                    dolzina = temp;
            }
            else if (mat[j][i] == 0)
            {

                temp = 0;
            }
        }

        printf("\n");
    }

    printf("Dolzinata e %d", dolzina);
    return 0;
}