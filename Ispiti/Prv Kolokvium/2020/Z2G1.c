#include <stdio.h>

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    int temp, prev = 0, br = 0;
    for (int i = 1; i < n; i++)
    {
        temp = i;

        while (temp)
        {
            br++;
            prev = prev * 10 + temp % 10;
            temp /= 10;
        }

        if (prev % br == 0)
            printf("Prevrteniot broj e %d i e deliv so %d \n", prev, br);
        else
            printf("Prevrteniot broj e %d i ne e deliv so %d \n", prev, br);

        prev = 0;
        br = 0;
    }

    return 0;
}