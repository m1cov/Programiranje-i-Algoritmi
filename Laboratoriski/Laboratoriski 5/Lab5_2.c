#include <stdio.h>

int presmetka(int a)
{

    if (a < 10)
    {

        if (a % 2 == 0)
            return 0;

        return a;
    }

    if (a % 2 != 0)
        return presmetka(a / 10) + a % 10;

    return presmetka(a / 10);
}

void f(int a, int b)
{

    for (int i = a; i <= b; i++)
    {
        if (presmetka(i) != 0 && presmetka(i) % 5 == 0)
            printf("%d ", i);
    }
}

int main()
{

    int poc, kraj;

    printf("Vnesi opseg\n");
    scanf("%d %d", &poc, &kraj);

    f(poc, kraj);
    return 0;
}