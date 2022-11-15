#include <stdio.h>
int main()
{
    int m, n;

    printf("Pick 2 numbers, any numbers\n");
    scanf("%d %d", &m, &n);
    printf("Zbirot e %d, razlikata e %d, proizvodot e %d\n", m + n, m - n, m * n);
    printf("Pogolemiot broj e %d", m >= n ? m : n);

    scanf("%d", &n);
    return (0);
}