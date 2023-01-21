#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *indat, *outdat;
    char c;
    int zborovi = 0, redovi = 0, red = 1;

    if (argc != 3)
        return -1;

    if ((indat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((outdat = fopen(argv[2], "w")) == NULL)
        return -1;

    while ((c = fgetc(indat)) != EOF)
    {

        if (c == ' ')
        {

            zborovi++;
        }

        if (c == '\n')
        {

            if (zborovi < 3)
            {
                fprintf(outdat, "Red %d\n", red);
                redovi++;
            }

            zborovi = 0;
            red++;
        }
    }

    fprintf(outdat, "Postojat %d takvi redovi\n", redovi);

    fclose(indat);
    fclose(outdat);

    return 0;
}