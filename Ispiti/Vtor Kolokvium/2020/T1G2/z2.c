#include <stdio.h>

int main()
{

#pragma region Primeri

    int matA[3][3] = {
        {0, 0, 0},
        {1, 0, 1},
        {0, 1, 0},
    };
    int matB[5][3] = {
        {1, 0, 1},
        {1, 0, 0},
        {1, 0, 0},
        {0, 1, 1},
        {0, 0, 0},
    };
#pragma endregion

    int mat[100][100];
    int m, n;
    int brred = 0, brkol = 0, temp = 0;
    int red = -1, kol = 0, br = 0;

#pragma region Vnes

/*     printf("Vnesi ja goleminata na matricata\n");
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", mat[m][n]);
        }
    } */
#pragma endregion

    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matA[i][j] == 0)
                temp++;
        }

        if (temp > brred)
        {   

            brred = temp;
            red = i;
            br = 1;
        }
        else if (temp == brred)
        {
            br++;
        }

        temp = 0;
    }

    printf("%d", red);

    return 0;
}