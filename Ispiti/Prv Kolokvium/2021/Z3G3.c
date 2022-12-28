#include <stdio.h>

int prost(int a)
{

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }

    return 1;
}

int f(int x)
{

    if (x < 10)
        return 0;

    if (prost(x))
        return 1;

    return f(x / 10);
}
int main()
{
    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    if (f(n) == 1)
        printf("Uslovot vazi");
    else
        printf("Uslovot ne vazi");

    return 0;
}