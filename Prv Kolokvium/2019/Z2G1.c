#include <stdio.h>

int fak(int x)
{

    int vrednost = 1;

    for (int i = 1; i <= x; i++)
    {
        vrednost *= i;
    }

    return vrednost;
}

int main()
{

    int poc, kraj, br = 0;

    printf("Vnesi broevi\n");
    scanf("%d %d", &poc, &kraj);

    if (kraj < poc)
    {
        printf("Greska\n");
        return 0;
    }

    int temp, zbir;
    for (int i = poc; i <= kraj; i++)
    {
        temp = i;
        zbir = 0;
        while (temp)
        {
            zbir += fak(temp % 10);
            temp /= 10;
        }

        if (zbir == i)
        {
            printf("Brojot %d e silen broj\n", i);
            br++;
        }
    }

    printf("Vo intervalot ima %d silni broevi", br);

    return 0;
}