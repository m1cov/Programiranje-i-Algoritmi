#include <stdio.h>

int f(int n)
{

    static int pog = 0, br = 0;
    if (n < 10)
    {
        br++;
        if (n > 4)
            pog++;

        if (pog > br / 2)
            return 1;

        return 2;
    }

    br++;

    if (n % 10 > 4)
        pog++;

    return f(n / 10);
}

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    printf("%d", f(n));
}