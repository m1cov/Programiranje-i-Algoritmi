#include <stdio.h>

int f(int x)
{

    if (x < 10)
        return 0;

    if ((x % 100) % 2 == 0)
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