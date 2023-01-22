#include <stdio.h>

int main()
{

    int mat[6][8] = {{1, 2, 3, 4, 5, 6, 7, 8},
                     {2, 1, 2, 3, 4, 5, 6, 7},
                     {3, 4, 5, 6, 7, 8, 9, 10},
                     {4, 5, 6, 7, 8, 9, 10, 0},
                     {5, 6, 7, 8, 9, 10, 0, 1},
                     {6, 7, 8, 9, 10, 0, 1, 2}};

    int naj1 = -1, naj2 = -1;
    int n = 6, m = 8;
    int temp = 0, najgolem = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp += mat[i][j];
        }

        if (temp > najgolem)
        {
            najgolem = temp;
            naj1 = i;
        }
    }

    temp = 0, najgolem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp += mat[i][j];
        }
        printf("\n");
        if (temp > najgolem && i != naj1)
        {
            najgolem = temp;
            naj2 = i;
        }
    }

    for (int i = 0; i < n; i++)
    {

        int pom = mat[i][naj1];
        mat[i][naj1] = mat[n - 1 - i][naj2];
        mat[n - 1 - i][naj2] = pom;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d \t", mat[i][j]);

        printf("\n");
    }

    return 0;
}