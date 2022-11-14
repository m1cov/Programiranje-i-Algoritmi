#include <stdio.h>

int f(int x)
{

    int p;

    if (x < 10)
        return 1;

    f(x / 10);
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