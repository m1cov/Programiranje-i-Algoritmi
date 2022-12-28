#include <stdio.h>

int main()
{

    float zetoni;

    printf("Vnesi zetoni\n");
    scanf("%f", &zetoni);

    if (zetoni <= 0)
        return 0;

    for (int i = 0; i < 3; i++)
    {
        int index;

        printf("Vnesi go indexot\n");
        scanf("%d", &index);

        switch (index)
        {
        case 1:
            if (zetoni >= 3)
                zetoni -= 3;
            else
                return 0;
            break;
        case 2:
            if (zetoni >= 1.5)
                zetoni -= 1.5;
            else
                return 0;
            break;
        case 3:
            if (zetoni >= 1)
                zetoni -= 1;
            else
                return 0;
            break;
        case 4:
            if (zetoni >= 8)
                zetoni -= 8;
            else
                return 0;
            break;
        case 5:
            if (zetoni >= .5)
                zetoni -= .5;
            else
                return 0;
            break;
        case 6:
            if (zetoni >= 6)
                zetoni -= 6;
            else
                return 0;
            break;

        default:
            break;
        }

        printf("Ostanuvaat uste %.1f zetoni", zetoni);
    }

    return 0;
}