#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    FILE *in_dat, *out_dat;
    char c;

    if (argc != 3)
        return -1;

    if ((in_dat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((out_dat = fopen(argv[2], "w")) == NULL)
        return -1;

    int zborovi = 1, red = 1, br = 0;

    while ((c = fgetc(in_dat)) != EOF)
    {

        if (c == ' ')
        {

            zborovi++;
        }

        if (c == '\n')
        {

            if (zborovi > 4)
            {

                fprintf(out_dat, "Red %d\n", red);
                br++;
            }

            red++;
            zborovi = 1;
        }
    }

    fprintf(out_dat, "Postojat %d takvi redovi\n", br);

    return 0;
}