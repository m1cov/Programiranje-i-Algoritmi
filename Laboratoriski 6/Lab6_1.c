#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[100], b[100];
    int n, najgolem = 0;

    printf("Vnesi kolku elementi ke ima nizata\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] > najgolem)
            najgolem = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = abs(najgolem - a[i]);
        printf("%d ", b[i]);
    }

    return 0;
}