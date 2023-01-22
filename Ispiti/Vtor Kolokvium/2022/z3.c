#include <stdio.h>

int main()
{

    int mat[6][8] = {{1, 2, 3, 4, 5, 6, 7, 8},
                     {2, 1, 2, 3, 4, 5, 6, 7},
                     {3, 4, 5, 6, 7, 8, 9, 10},
                     {4, 5, 6, 7, 8, 9, 10, 0},
                     {5, 6, 7, 8, 9, 10, 0, 1},
                     {6, 7, 8, 9, 10, 0, 1, 2}};

    int m = 6, n = 8;
    int max = 0, min = 0;

    printf("Vnesi ja goleminata na matricata\n");
    scanf("%d %d", &m, &n);

    printf("Vnesi gi elementite na matricata");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Najdi najgolem element
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > max)
                max = mat[i][j];
        }
    }

    // Najdi gi najgolemite i izbrisi gi tie koloni
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == max)
            {
                for (int x = 0; x < m; x++)
                {
                    for (int y = j; y < n - 1; y++)
                    {
                        mat[x][y] = mat[x][y + 1];
                    }
                }

                n--;
            }
        }
    }

    // Najdi najmal element
    min = mat[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] < min)
                min = mat[i][j];
        }
    }

    // Izbrisi redici so najmali elementi
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (mat[i][j] == min)
            {

                for (int x = i; x < m; x++)
                {
                    for (int y = 0; y < n; y++)
                    {
                        mat[x][y] = mat[x + 1][y];
                    }
                }

                m--;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}