#include <stdio.h>

int main()
{

    int kluch[10], odgovori[10];

    char c = 'a';
    int pom, p;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d %d", &kluch[i], &pom);

        if (pom >= 1 && pom <= 5)
        {

            kluch[i] = pom;
        }
        else
        {
            i--;
        }
    }

    while (c != '.')
    {
        p = 0;
        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &odgovori[i]);
        }

        for (int i = 0; i < 10; i++)
        {

            if (odgovori[i] >= 1 && odgovori[i] <= 5)
            {
                if (odgovori[i] == kluch[i])
                    p += 2;
                else
                    p -= 1;
            }
        }

        printf("%d\n", p);
        c = getchar();
    }
}