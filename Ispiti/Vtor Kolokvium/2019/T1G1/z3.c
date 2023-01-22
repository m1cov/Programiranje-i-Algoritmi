#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    FILE *indat, *outdat;
    char c;
    char ime[100];
    int prv = 1, br = 0;

    if (argc != 3)
        return -1;

    if ((indat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((outdat = fopen(argv[2], "w")) == NULL)
        return -1;

    int i = 0, prosek = 0, stepen = 1, broj = 0;
    while ((c = fgetc(indat)) != EOF)
    {

        if (c != ' ' && prv)
        {
            ime[i++] = c;
            stepen = 1;
        }

        if (c == ' ' && prv)
        {
            prv = 0;
            ime[i] = ' ';
            stepen = 1;
        }

        if (c != ' ' && !prv)
        {
            if (stepen > 10)
                stepen = 10;

            broj = broj * stepen + ((int)c - '0');
            stepen *= 10;
            printf("%d ", broj);
        }

        if (c == ' ' && !prv)
        {
            stepen = 1;
            prosek += broj;
            broj = 0;
        }

        if (c == '\n')
        {
            prosek += broj;

            // printf("%d ", prosek);
            if (prosek / 3 < 10)
            {
                br++;

                fputs(ime, outdat);

                fprintf(outdat, "%d\n", prosek / 3);
            }

            i = 0;
            prv = 1;
            prosek = 0;
            broj = 0;
            stepen = 1;
        }
    }

    fprintf(outdat, "%d", br);
    return 0;
}