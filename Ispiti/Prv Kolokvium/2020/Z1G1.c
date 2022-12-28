#include <stdio.h>

int main()
{

    int pari;

    printf("Vnesi pari\n");
    scanf("%d", &pari);

    if (pari >= 118)
    {
        printf("Ima pari za da se napravi torta\n");
        pari -= 118;

        if (pari >= 75)
            printf("Tortata ke bide coko-vanila\n");
        else if (pari >= 55)
            printf("Tortata ke bide cokoladna\n");
        else if (pari >= 20)
            printf("Tortata ke bide vanila\n");
        
    }
    else
        printf("Nema pari za osnovni proizvodi");
}