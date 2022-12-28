#include <stdio.h>

int main()
{

    int n, br = 0;

    printf("Vnesi kolku celi broevi treba da se vcitaat\n");
    scanf("%d", &n);

    int niza[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (niza[i] < 2)
        {
            br++;
            printf("1, ");
        }

        for (int j = 2; j <= niza[i]; j++)
        {
            if (niza[i] % j == 0 && niza[i] != j)
                break;
            else if (j == niza[i])
            {
                br++;
                printf("%d, ", niza[i]);
            }
        }
    }

    printf("\n Procentot na vneseni prosti broevi e %.2f",
           (float)(br * 100 / n));
}