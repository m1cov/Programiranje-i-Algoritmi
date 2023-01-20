#include <stdio.h>

int main()
{

    int prA[3][3] = {{5, 7, 3},
                     {8, 6, 7},
                     {9, 9, 9}};

    int prB[5][5] = {{10, 2, 1, 1, 1},
                     {4, 6, 3, 2, 0},
                     {5, 2, 9, 7, 1},
                     {6, 5, 4, 18, 2},
                     {2, 16, 15, 9, 10}};

    int n = 3, m = 5, test = 3;
    int matA[50][50], matB[50][50];

    /*     scanf("%d %d", &n, &m);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", matA[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", matA[i][j]);
            }
        }

    if (n > 50 || m > 50)
        return -1;

    if (m > n)
        test = n;
    else
        test = m;*/

    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < test; j++)
        {
            if ((i == j) && (prA[i][j] == prB[i][j]))
            {

                int temp = i + 1;
                int zbir = 0;
                while (temp < n)
                {

                    zbir += prA[i][temp];

                    temp++;
                }

                prA[i][j] = zbir;
                temp = i + 1;
                zbir = 0;

                while (temp < m)
                {

                    zbir += prB[i][temp];

                    temp++;
                }

                prB[i][j] = zbir;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", prA[i][j]);
        }

        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", prB[i][j]);
        }

        printf("\n");
    }

    return 0;
}