#include <stdio.h>

int main(int argc, char *argv[])
{

    FILE *in_dat, *out_dat;

    int i = 0, j = 0;
    char c;
    char broj[100];

    if (argc != 3)
        return -1;

    if ((in_dat = fopen(argv[1], "r")) == NULL)
        return -1;

    if ((out_dat = fopen(argv[2], "w")) == NULL)
        return -1;

    while ((c = fgetc(in_dat)) != EOF)
    {

        i = 0;
        if (c <= '9' && c >= '0')
        {
            broj[i] = c;
            i++;
            fputc(c, out_dat);
        }

        if (c == '\n')
        {

            for (j = 0; j < i; j++)
            {
                switch ((broj[j]))
                {
                case '0':
                    fprintf(out_dat, "-nula");
                    break;
                case '1':
                    fprintf(out_dat, "-eden");
                    break;

                case '2':
                    fprintf(out_dat, "-dva");
                    break;

                case '3':
                    fprintf(out_dat, "-tri");
                    break;

                case '4':
                    fprintf(out_dat, "-cetiri");
                    break;

                case '5':
                    fprintf(out_dat, "-pet");
                    break;
                case '6':
                    fprintf(out_dat, "-sest");
                    break;

                case '7':
                    fprintf(out_dat, "-sedum");
                    break;

                case '8':
                    fprintf(out_dat, "-osum");
                    break;
                case '9':
                    fprintf(out_dat, "-devet");
                    break;

                default:
                    printf("Greska");
                }
            }
            fputc(c, out_dat);
        }
    }
    _fcloseall();

    return 0;
}