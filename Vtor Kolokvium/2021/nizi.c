/*
    1. Vnese dolzina na niza i posle se vnese niza
    2. Vnese broj h koj e pomal od nizata
    3. ispecatat site podnizi so dolzina h koi go sodrzat brojot h
*/

#include <stdio.h>

int main()
{

    int n, h;

    printf("Vnesi dolzina na nizata\n");
    scanf("%d", &n);

    int niza[n];

    printf("Vnesi gi elementite na nizata\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &niza[i]);

    printf("Vnesi ja dolzinata na podnizite\n");
    scanf("%d", &h);

    if (h > n)
    {
        printf("Greska\n");
        return 0;
    }
    int postoi = 0;
    for (int i = 0; i <= n - h; i++)
    {
        int najden = 0;

        for (int j = i; j < i + h; j++)
        {
            if (niza[j] == h)
            {
                najden = 1;
                postoi = 1;
            }
        }
        if (najden)
        {

            printf("(");
            for (int k = i; k < i + h; k++)
            {
                printf("%d, ", niza[k]);
            }

            printf("), ");
        }
    }

    if (postoi == 0)
        printf("Ne e najdena ni edna takva podniza");

    return 0;
}