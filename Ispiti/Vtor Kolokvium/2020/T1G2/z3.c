#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    FILE *indat, *outdat;
    char c;
    int redovi = 0, br = 0, red = 1;

    if (argc != 3)
        return -1;

    if ((indat = fopen(argv[1], "r")) == NULL)
        return -1;
    if ((outdat = fopen(argv[2], "w")) == NULL)
        return -1;

    while ((c = fgetc(indat)) != EOF)
    {

        if (!isalnum(c))
        {

            br++;
        }
        if (c == '\n')
        {

            if (br > 10)
            {
                fprintf(outdat, "Red %d\n", red);
                redovi++;
            }

            red++;
            br = 0;
        }
    }

    fprintf(outdat, "Postojat %d takvi reda", redovi);

    return 0;
}