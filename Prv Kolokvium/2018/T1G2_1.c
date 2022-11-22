#include <stdio.h>

int rek(int a)
{

    if (a < 10)
    {
        if (a % 2 == 0)
            return 1;
        else
            return 2;
    }

    return rek(a / 10);
}

int main()
{

    int a;

    printf("Vnesi broj:\n");
    scanf("%d", &a);

    printf("%d", rek(a));
}