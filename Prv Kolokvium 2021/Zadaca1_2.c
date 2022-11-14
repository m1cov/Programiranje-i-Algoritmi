#include <stdio.h>

int main()
{

    int pari;
    float vreme = 0;

    printf("Vnesi gi parite\n");
    scanf("%d", &pari);

    if (pari >= 1000)
    {

        vreme += 1;
        pari -= 1000;

        if (pari >= 1700)
            vreme += 2;
        else if (pari >= 1200)
            vreme += 1.5;
        else if (pari >= 500)
            vreme += .5;

        printf("Vreme: %.2f", vreme);
    }
    else
        printf("Nema pari za rezervacija\n");
}