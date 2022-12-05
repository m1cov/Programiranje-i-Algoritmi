#include <stdio.h>

int main()
{

    int mat[3][3];

    // Vnes na elementi vo matrica
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Pecatenje na elementi od matrica
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) // Moze i j = i+1 za pecatenje nad glavna, j < i za pod glavna
        {
            if (i < j) // Pecati nad glavna; i > j -> pod glavna
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}