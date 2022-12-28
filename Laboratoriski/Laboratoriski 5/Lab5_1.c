#include <stdio.h>

int proverka(int a)
{

    int cifra = a % 10;
    int najznacajna = 0;
    while (a)
    {
        najznacajna = a % 10;
        a /= 10;
    }

    if (najznacajna < cifra)
        return 1;
    else
        return 0;
}

int f(int a, int b)
{
    int broevi = 0;

    if (a == b)
    {

        if (proverka(a))
            return 1;

        return 0;
    }

    if (a < b)
    {

        if (proverka(a))
            return f(a + 1, b) + 1;

        return f(a + 1, b);
    }
}

int main()
{

    int poc, kraj;

    printf("Vnesi go pocetokot i krajot\n");
    scanf("%d %d", &poc, &kraj);

    printf("%d", f(poc, kraj));

    return 0;
}