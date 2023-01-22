#include <stdio.h>

void sort(int niza[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (niza[j] % 2 == 0)
            {

                int temp = niza[i];
                niza[i] = niza[j];
                niza[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", niza[i]);
    }
}

int main()
{

    int pr[] = {7, 2, 15, 0, -3, 2, 5};
    int niza[100];
    int n = 7;

    /*    printf("Vnesi dolzina na nizata\n");
       scanf("%d", &n);

       printf("Vnesi ja nizata\n");
       for (int i = 0; i < n; i++)
       {
           scanf("%d", niza + i);
       }
    */
    sort(pr, n);
}