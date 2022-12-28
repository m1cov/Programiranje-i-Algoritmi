#include <stdio.h>

void f(int *niza, int n)
{

    printf("Prevrtuvanje vo funkcijata:\n");
    for (int i = n - 1, j = 0; i >= n / 2; i--, j++)
    {
        int temp = *(niza + i);
        *(niza + i) = *(niza + j);
        *(niza + j) = temp; 
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(niza + i));
    }
}

int main()
{

    int niza[100];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", niza + i);

    f(niza, n);

    printf("\nPecatenje na prevrtenata niza\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(niza + i));

    return 0;
}