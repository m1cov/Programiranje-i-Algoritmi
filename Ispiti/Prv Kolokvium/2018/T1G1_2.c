#include <stdio.h>

int main()
{

    int n;

    printf("Vnesi broj:\n");
    scanf("%d", &n);

    int delitel = 0, br = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                temp += j;
        }

        if (temp > delitel)
        {
            br = i;
            delitel = temp;
        }
    }

    int broevi = 0;
    for (int i = 0; i < n; i++)
    {
        int prom = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                prom += j;
        }

        if (prom == delitel)
            broevi++;
    }

    printf("%d %d %d", br, delitel, broevi);
}
