#include <stdio.h>

int main()
{

    int vreme, steta = 0;

    printf("Vnesi vreme\n");
    scanf("%d", &vreme);

    int udar;
    for (int i = 0; i < 3; i++)
    {
        printf("Vnesi udar\n");
        scanf("%d", &udar);

        switch (udar)
        {
        case 1:
            vreme -= 3;
            if (vreme >= 0)
            {
                steta += 3;
                printf("Korisnik used udar so raka\n");
            }
            break;
        case 2:
            vreme -= 5;
            if (vreme >= 0)
            {
                steta += 4;
                printf("Korisnik used udar so nnoga\n");
            }
            break;
        case 3:
            vreme -= 10;
            if (vreme >= 0)
            {
                steta += 8;
                printf("Korisnik used magija\n");
            }
            break;
        case 4:
            vreme -= 1;
            if (vreme >= 0)
            {
                steta += 1;
                printf("Korisnik used skok\n");
            }
            break;
        case 5:
            vreme -= 7;
            if (vreme >= 0)
            {
                steta += 6;
                printf("Korisnik used uppercut\n");
            }
            break;

        default:

            break;
        }
        if (i != 2)
            printf("Preostanato vreme %d\n", vreme);
    }

    printf("Vkupno nanesena steta: %d\n", steta);

    return 0;
}