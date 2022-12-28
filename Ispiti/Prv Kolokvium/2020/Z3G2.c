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

    if (prost(x % 100))
        return 1;

    return f(x / 10);
}

int main()
{

    int n;

    printf("Vnesi broj za proverka\n");
    scanf("%d", &n);

    printf("%d", f(n));
}