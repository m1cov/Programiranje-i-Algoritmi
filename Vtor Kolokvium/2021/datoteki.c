/*Да се напише програма која од командна линија добива имиња на една влезна и една
излезна датотека. Програмата треба да ја измине влезната датотека и за секој ред да го најде
бројот на големи букви и бројот на самогласки. Притоа, во излезната датотека да ги
отпечати оние редови во кои има повеќе големи букви од самогласки. На крај во излезната
датотека да се испечатат бројот на големи букви и бројот на самогласки кои се појавиле во
целата датотека. Исто така, да се провери дали правилно се користи програмата, ако не, да
се даде упатство за користење. Линиите во датотеките имаат најмногу 250 знаци.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    FILE *fin, *fout;
    char niza[251];
    int golemi = 0, samoglaski = 0;
    int rgolemi = 0, rsamoglaski = 0;
    int i = 0;
    char c;

    if (argc != 3)
    {
        printf("Povikot treba da ima forma %s <in_dat> <out_dat\n", argv[0]);
        return 0;
    }
    else if ((fin = fopen(argv[1], "r")) == NULL)
    {
        printf("Ne moze da se otvori vleznata datoteka\n");
        return 0;
    }
    else if ((fout = fopen(argv[2], "w")) == NULL)
    {
        printf("Ne moze da se otvori izleznata datoteka\n");
        return 0;
    }

    while ((c = fgetc(fin)) != EOF)
    {
        if (c != '\n')
        {
            niza[i] = c;
            i++;
            if (isupper(c))
            {
                golemi++;
                rgolemi++;
            }
            c = toupper(c);

            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {

                samoglaski++;
                rsamoglaski++;
            }
        }
        else
        {

            if (rgolemi > rsamoglaski)
            {
                niza[i] = 0;
                fprintf(fout, "%s\n", niza);
            }

            rsamoglaski = 0;
            rgolemi = 0;
            i = 0;
        }
    }

    fprintf(fout, "%d %d\n", golemi, samoglaski);
    fclose(fin);
    fclose(fout);

    return 0;
}