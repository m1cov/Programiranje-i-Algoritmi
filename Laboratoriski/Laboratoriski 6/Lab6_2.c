#include <stdio.h>
#include <stdlib.h>

int eprost(int x)
{

    if (x < 2)
        return 1;

    for (int i = 2; i <= x; i++)
        if (x % i == 0 && x != i)
            return 0;

    return 1;
}

int main()
{

    unsigned int niza[100];
    int n;

    printf("Vnesi dolzina na nizata\n");
    scanf("%d", &n);

    printf("Vnesi gi elementite na nizata\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &niza[i]);

    for (int i = 0; i < n - 1; i++)
    {
        if (eprost(niza[i]) && eprost(niza[i + 1]))
        {

            int temp = niza[i];
            niza[i] = niza[i + 1];
            niza[i + 1] = temp;
            i++;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", niza[i]);

    return 0;
}