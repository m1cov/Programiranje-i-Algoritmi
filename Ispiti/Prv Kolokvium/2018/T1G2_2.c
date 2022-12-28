#include <stdio.h>

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    int zbir;

    for (int i = 0; i < n; i++)
    {
        zbir = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                zbir += j;
        }

        if (zbir == i)
            printf("Brojot %d e sovrsen broj\n", i);
    }

    return 0;
}