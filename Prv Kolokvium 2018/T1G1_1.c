#include <stdio.h>

int rek(int x)
{

    if (x < 10)
        return 1;
    else
        return (rek(x / 10) + 1) % 2 == 0 ? 0 : 1;
}

int main()
{

    int a;

    printf("Vnesi broj za proverka:\n");
    scanf("%d", &a);

    printf("%d", rek(a));
}
