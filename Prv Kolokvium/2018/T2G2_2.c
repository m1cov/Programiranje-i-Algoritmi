#include <stdio.h>

int main()
{

    int a, b;

    printf("Vnesi interval\n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Greska");
        return 0;
    }
    int zbir, proizvod, prev;
    for (int i = a; i < b; i++)
    {

        for (int j = i; j < b; j++)
        {
            zbir = prev = 0;
            proizvod = 1;

            zbir = i + j;
            int temp = j;
            proizvod = i * j;

            while (proizvod)
            {
                prev = prev * 10 + (proizvod % 10);
                proizvod /= 10;
            }

            if (zbir == prev)
                printf("(%d, %d), ", i, j);
        }
    }

    return 0;
}