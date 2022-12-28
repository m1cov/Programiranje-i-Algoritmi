#include <stdio.h>

int main()
{

    int pari, proizvod;

    printf("Vnesi pari i broj na proizvod");
    scanf("%d %d", &pari, &proizvod);

    switch (proizvod)
    {
    case 1:
        if (pari >= 45)
        {
            pari -= 45;

            if (pari >= 270)
                printf("Moze da kupi pasta za zabi, toaletna hartija i kaskaval");
            else if (pari >= 245)
                printf("Moze da kupi kaskaval i toaletna hartija");
            else if (pari >= 98)
                printf("Moze da kupi toaletna hartija");
            else
                printf("Ne moze da kupi nisto drugo");
        }
        else
            printf("Nemate dovolno pari");
        break;
    case 2:
        if (pari >= 60)
        {
            pari -= 60;

            if (pari >= 310)
                printf("Moze da kupi nutela, pasta za zabi, kaskaval i toaletna hartija");
            else if (pari >= 270)
                printf("Moze da kupi pasta za zabi, toaletna hartija i kaskaval");
            else if (pari >= 245)
                printf("Moze da kupi kaskaval i toaletna hartija");
            else if (pari >= 98)
                printf("Moze da kupi toaletna hartija");
            else
                printf("Ne moze da kupi nisto drugo");
        }
        else
            printf("Nemate dovolno pari");
        break;
    case 3:
        if (pari >= 245)
        {
            pari -= 245;
            if (pari >= 310)
                printf("Moze da kupi nutela, kaskaval, domati i toaletna hartija");
            else if (pari >= 98)
                printf("Moze da kupi toaletna hartija i domati");
            else if (pari >= 60)
                printf("Moze da kupi resani, domati");
            else if (pari >= 45)
                printf("Moze da kupi domati");
            else
                printf("Ne moze da kupi nisto drugo");
        }
        else
            printf("Nemate dovolno pari");
        break;
    case 4:
        if (pari >= 98)
        {
            pari -= 98;

            if (pari >= 310)
                printf("Moze da kupi nutela, kaskaval, domati, resani i pasta za zabi");
            else if (pari >= 270)
                printf("Moze da kupi kaskaval, domati i resani i pasta za zabi");
            else if (pari >= 245)
                printf("Moze da kupi kaskaval, domati i resani");
            else if (pari >= 60)
                printf("Moze da kupi resani i domati");
            else if (pari >= 45)
                printf("Moze da kupi domati");
            else
                printf("Ne moze da kupi nisto drugo");
        }
        else
            printf("Nemate dovolno pari");
        break;
    case 5:
        if (pari >= 310)
            pari -= 310;
        else
            printf("Nemate dovolno pari");
        break;
    case 6:
        if (pari >= 270)
            pari -= 270;
        else
            printf("Nemate dovolno pari");
        break;

    default:
        printf("Vnesovte nevaliden broj");
        break;
    }
}
