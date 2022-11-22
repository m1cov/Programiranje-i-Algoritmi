#include <stdio.h>

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    // Proverka dali e paren
    int temp = n, br = 0;
    while (temp)
    {
        temp /= 10;
        br++;
    }

    if (br % 2 != 0)
    {
        printf("GRESKA");
        return 0;
    }

    temp = n;
    int prv = 0, vtor = 0;
    while (temp)
    {
        if (temp % 2 == 0)
            prv = prv * 10 + temp % 10;
        else
            vtor = vtor * 10 + temp % 10;

        temp /= 10;
    }

    printf("Prv broj: %d \nVtor broj: %d\n", prv, vtor);

    int pro1 = 1, pro2 = 1;

    while (prv)
    {

        pro1 *= (prv % 10);
        prv /= 10;
    }
    printf("Proizvod od cifri na prv broj: %d\n", pro1);

    while (vtor)
    {

        pro2 *= (vtor % 10);
        vtor /= 10;
    }

    printf("Proizvod na cifri na vtor broj: %d\n", pro2);
    printf("Konecen rezultat: %d ", pro1 + pro2);

    return 0;
}
