#include <stdio.h>

int main()
{
#pragma region Primeri
    int prA[5][5] = {{10, 2, 1, 1, 1},
                     {4, 7, 3, 2, 0},
                     {5, 2, 5, 7, 2},
                     {6, 5, 4, 18, 2},
                     {2, 16, 15, 9, 10}},
        prB[5][6] = {
            {1, 4, 9, 3, 2, 2},
            {4, 17, 6, 12, 10, 6},
            {5, 0, 15, 0, 8, 5},
            {6, 7, 7, 8, 1, 10},
            {2, 8, 1, 9, 10, 3}};
#pragma endregion

    int ared = 5, akol = 5, bred = 6, bkol = 5;
    int matA[50][50], matB[50][50];
    int zameni = 0;

    /*     printf("Vnesi ja goleminata na matricite");
        scanf("%d %d  %d %d", &ared, &akol, &bred, &bkol);

        if ((akol || ared || bred || bkol) > 50)
            return -1;
        else if (ared != bred)
            return -1;

    printf("Vnesi ja prvata matrica\n");
    for (int i = 0; i < akol; i++)
    {
        for (int j = 0; j < ared; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Vnesi ja vtorata matrica\n");
    for (int i = 0; i < bkol; i++)
    {
        for (int j = 0; j < bred; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }*/

    for (int i = 0; i < akol; i++)
    {
        for (int j = 0; j < bred; j++)
        {

            if ((prA[0][i] + prA[akol - 1][i]) == (prB[0][j] + prB[bkol - 1][j]))
            {
                zameni++;

                for (int z = 0; z < akol; z++)
                {

                    int temp = prA[z][i];
                    prA[z][i] = prB[z][j];
                    prB[z][j] = temp;
                }

                break;
            }
        }
        printf("\n");
    }

    printf("Brojot na zameni e %d", zameni);
    printf("\nPrvata matrica e \n");
    for (int i = 0; i < akol; i++)
    {
        for (int j = 0; j < ared; j++)
        {
            printf("%d \t", prA[i][j]);
        }
        printf("\n");
    }
    printf("\nVtorata matrica e \n");
    for (int i = 0; i < bkol; i++)
    {
        for (int j = 0; j < bred; j++)
        {
            printf("%d \t", prB[i][j]);
        }
        printf("\n");
    }

    return 0;
}