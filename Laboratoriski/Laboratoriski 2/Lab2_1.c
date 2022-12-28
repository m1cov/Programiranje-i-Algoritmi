#include <stdio.h>

int main()
{

    int a, b;

    printf("Vnesi 2 celi broja\n");
    scanf("%d %d", &a, &b);

    a *= b;

    if (a > b)
        b -= a;

    printf("Novite vrednosti na a i b se %d i %d, \n a rezultatot na nivno delenje e %d", a, b, a / b);
}