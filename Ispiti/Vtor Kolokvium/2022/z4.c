#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    FILE *indat, *outdat;
    char c;

    if (argc != 3)
        return -1;

    if ((indat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((outdat = fopen(argv[2], "w")) == NULL)
        return -1;

    while ((c = fgetc(indat)) != EOF)
    {

        if (isalnum(c))
        {

            if (!isalpha(c))
                fprintf(outdat, "\n%c\n", c);
            else
                fprintf(outdat, "%c", c);
        }

        if (!isalnum(c))
        {

            if (c == '\n')
                continue;
            else
                fprintf(outdat, "%c", c);
        }
    }

    fclose(indat);
    fclose(outdat);

    return 0;
}