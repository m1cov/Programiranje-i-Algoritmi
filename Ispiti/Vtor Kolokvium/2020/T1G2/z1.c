#include <stdio.h>

int funkcija(int *niza, int n)
{
    int br = n;
    for (int i = 0; i < n - 1; i++)
    {
        if (*(niza + i) >= *(niza + i + 1)){

            

        }
    }
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

    return 0;
}