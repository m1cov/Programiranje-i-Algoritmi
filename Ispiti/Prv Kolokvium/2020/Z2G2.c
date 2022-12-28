#include <stdio.h>

int main()
{

    int n;

    printf("Vnesi broj\n");
    scanf("%d", &n);

    int temp, proiz, obr;
    for (int i = 1; i < n; i++)
    {
        proiz = 1;
        temp = i;
        obr = 0;
        while (temp)
        {

            obr = obr * 10 + (temp % 10);
            proiz *= temp % 10;
            temp /= 10;
        }

        if (proiz != 0 && obr % proiz == 2)
            printf("Prevrteniot broj e %d i pri delenje so %d dava ostatok 2\n", obr, proiz);
        else
            printf("Prevrteniot broj e %d i pri delenje so %d ne dava ostatok 2\n", obr, proiz);
    }

    return 0;
}