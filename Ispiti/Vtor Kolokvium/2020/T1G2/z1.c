#include <stdio.h>
#include <stdlib.h>

int funkcija(int *niza, int n)
{
    int br = n;

    for (int i = 0; i < n; i++)
    {
        if (*(niza + i + 1) >= *(niza + i))
        {

            if (*(niza + i + 1) < 0)
            {

                *(niza + i + 1) = *(niza + i + 2);
                br--;
                i--;
            }
            else
                *(niza + i + 1) -= (abs(*(niza + i + 1)) + abs(*(niza + i)) + 1);
        }

        printf("%d\n", *(niza + i));
    }

    return br;
}

int main()
{

    int niza[100] = {14, 12, -6, 20, 15, -1, 10, 6, -7, -20};
    int n = 10;

    /*   printf("Vnesi go brojot na elementi\n");
       scanf("%d", &n);

       printf("Vnesi gi elementite na nizata\n");
       for (int i = 0; i < n; i++)
           scanf("%d", niza + i);*/

    n = funkcija(niza, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}