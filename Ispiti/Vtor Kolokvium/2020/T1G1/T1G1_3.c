#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{

    FILE *in_dat, *out_dat;
    char c;
    int golemi = 0;
    int red = 1, br = 0;

    if (argc != 3)
        return -1;

    if ((in_dat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((out_dat = fopen(argv[2], "w")) == NULL)
        return -1;

    while ((c = fgetc(in_dat)) != EOF)
    {

        if (isupper(c))
        {

            golemi++;
        }

        if (c == '\n')
        {
            if (golemi < 5)
            {
                br++;
                fprintf(out_dat, "Red %d\n", red);
            }

            red++;
            golemi = 0;
        }
    }

    fprintf(out_dat, "Postojat %d takvi redovi\n", br);

    return 0;
}