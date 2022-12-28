#include <stdio.h>

int main()
{

    int n;

    printf("Vnesi broj:\n");
    scanf("%d", &n);
    int temp = n;
    int cifra = 0;
    while (temp)
    {
        cifra++;
        temp /= 10;
    }

    if (cifra % 2 != 0)
    {
        printf("Greska");
        return 0;
    }

    int s1 = 1, s2 = 1;
    int prv = 0, vtor = 0;
    temp = n;
    while (temp)
    {
        cifra = temp % 10;
        if (cifra % 2 == 0)
        {
            prv = cifra * s1 + prv;
            s1 *= 10;
        }
        else
        {
            vtor = cifra * s2 + vtor;
            s2 *= 10;
        }

        temp /= 10;
    }
    printf("prv : %d, vtor: %d", prv, vtor);
    vtor *= prv;

    printf("proizvodot e %d \n", vtor);
    temp = 0;
    while (vtor)
    {
        temp = temp * 10 + (vtor % 10);
        vtor /= 10;
    }

    printf("konecen %d", temp);

    return 0;
}