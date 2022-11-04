#include <stdio.h>

int main()
{

    int x, deliteli = 0, br = 0;

    printf("Vnesi vrednost za x\n");
    scanf("%d", &x);

    int temp;
    while (deliteli < 2)
    {
        scanf("%d", &temp);
        br++;
        if (x % temp == 0)
            deliteli++;
    }
    printf("Brojot na vneseni broevi e %d", br);
}