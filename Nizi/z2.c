#include <stdio.h>

int eBukva(char c)
{

    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int voGolemaBukva(char c)
{

    if (c >= 'A' && c <= 'Z')
        return c;

    return (c - 'a') + 'A';
}

int main()
{

    int niza[26] = {0};
    char c, golema;

    while (1)
    {

        printf("Vneis znak:\n");
        fflush(stdout);
        scanf("%c", &c);

        if (c == '.')
        {

            for (int i = 0; i < 26; i++)
            {
                printf("%c: %d \n", i + 'A', niza[i]);
            }

            break;
        }
        else
        {
            if (eBukva(c))
            {
                golema = voGolemaBukva(c);
                niza[golema - 'A']++;
            }
        }
    }

    return 0;
}