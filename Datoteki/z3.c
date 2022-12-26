#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define wordlen 21

int proverka(char *s)
{
    int isti;
    char *s1;

    while (*s != '\0')
    {
        s1 = s++;
        isti = 1;

        while (*s1 != '\0')
        {
            if (*s1 = *s)
                isti++;

            s1++;
        }

        if (isti > 3)
            return 1;
    }

    return 0;
}

int main(int argc, char *argv[])
{

    FILE *in_dat;
    char c;
    int i = 0;
    char zbor[wordlen];

    if (argc != 2)
        return -1;

    if ((in_dat = fopen(argv[1], "r")) == NULL)
        return -1;

    int iw = 0, br = 0;
    while ((c = fgetc(in_dat)) != EOF)
    {
        if (isalpha(c))
        {

            zbor[i++] = c;

            if (!iw)
                iw = 1;
        }
        else
        {

            if (iw)
            {
                zbor[i] = '\n';
                if (proverka(zbor))
                {
                    br++;
                    puts(zbor);
                }

                i = 0;
                iw = 0;
                zbor[i] = '\n';
            }
        }
    }

    _fcloseall();

    return 0;
}