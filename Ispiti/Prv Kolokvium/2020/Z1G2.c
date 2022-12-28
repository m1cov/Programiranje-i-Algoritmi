#include <stdio.h>

int main()
{

    int vreme, promet = 0;

    printf("Vnesi preostanato vreme\n");
    scanf("%d", &vreme);

    if (vreme >= 50)
    {
        promet += 2020;
        vreme -= 50;

        if (vreme >= 77)
            promet += 950;
        else if (vreme >= 42)
            promet += 500;
        else if (vreme >= 35)
            promet += 450;
    }

    printf("Prometot e %d", promet);
    return 0;
}