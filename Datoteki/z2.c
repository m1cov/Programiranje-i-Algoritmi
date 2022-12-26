#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    FILE *in_dat, *out_dat;
    int vkupno, red, mali;
    char c;

    if (argc != 3)
        return -1;

    if ((in_dat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((out_dat = fopen(argv[2], "w")) == NULL)
        return -1;

    red = 1;
    vkupno = mali = 0;
    while (c = fgetc(in_dat) != EOF)
    {
        if (islower(c))
            mali++;

        if (c == '\n')
        {
            if (mali >= 10)
            {
                vkupno++;
                fprintf(out_dat, "%d\n", red);
            }

            red++;
            mali = 0;
        }
    }

    fprintf(out_dat, "%d redovi \n", vkupno);
    _fcloseall();

    return 0;
}
