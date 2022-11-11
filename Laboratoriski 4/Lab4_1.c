#include <stdio.h>

int delitel(int a)
{

    if (a < 10)
        return 1;
    else
    {

        if ((a / 10 % 10) % (a % 10) == 0)
            delitel(a / 10);
        else
            return 0;
    }
}

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    printf("%d", delitel(n));
    return 0;
}