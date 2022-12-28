#include <stdio.h>

int f(int x)
{

    int c1, c2;

    if (x < 10)
        return 1;

    c1 = x % 10 + 1;
    c2 = x / 10 % 10;

    if (c1 % c2 != 0)
        return 0;

    return f(x / 10);
}

int main()
{

    int n;

    printf("Vnesi go brojot\n");
    scanf("%d", &n);

    if (f(n) == 1)
        printf("Uslovot vazi");
    else
        printf("Uslovot ne vazi");
}