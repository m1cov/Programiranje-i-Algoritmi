#include <stdio.h>
static int parni = 0, neparni = 0;
void f(int x)
{

    if (x < 10)
        x % 2 == 0 ? parni++ : neparni++;
    else
    {
        (x % 10) % 2 == 0 ? parni++ : neparni++;
        f(x / 10);
    }
}

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    f(n);

    printf("%d", parni > neparni ? 1 : 0);
}