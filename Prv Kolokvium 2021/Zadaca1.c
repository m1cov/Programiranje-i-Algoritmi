#include <stdio.h>

int main()
{

    int pari;

    printf("Vnesi gi parite\n");
    scanf("%d", &pari);

    if (pari >= 1000)
    {
        printf("Mоze da se napravi rezervacija\n");
        pari -= 1000;

        if (pari >= 1500)
            printf("Ima pari za celosen tretman\n");
        else if (pari >= 1000)
            printf("Ima pari i za tretman na celo telo\n");
        else if (pari >= 500)
            printf("Ima pari za sauna");
        else
            printf("Nema pari za dopolnitelen tretman\n");
    }
    else
        printf("Ne moze da se napravi rezervacija\n");
}