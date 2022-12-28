#include <stdio.h>

int f(int x)
{

    if (x < 10)
    {

        if (x % 2 == 0)
            return 0;

        return x - 1;
    }

    if ((x % 10) % 2 == 0)
        return f(x / 10) * 10 + 0;
    else
        return f(x / 10) * 10 + (x % 10 - 1);
}

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    printf("Brojot e %d", f(n));
}