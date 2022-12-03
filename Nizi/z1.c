#include <stdio.h>

int main()
{

    int niza[25];
    int proizvod = 1, suma = 0;

    printf("Vnesi ja nizata\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &niza[i]);
        proizvod *= niza[i];

        niza[i] *= 2;
        suma += niza[i];
    }

    printf("Proizvod %d, suma %d\n", proizvod, suma);
    printf("3tiot broj %d", niza[2]);

    return 0;
}
