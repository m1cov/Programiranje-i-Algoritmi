#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pr(char *s)
{

    char *a = s, *b = s;

    while (*a != '\0')
    {
        if (isalpha(*a))
        {
            *b = tolower(*a);
            b++;
        }

        a++;
    }

    *b = '\0';
}

int f(char *s)
{

    pr(s);
    char *p1, *p2;

    for (p1 = s, p2 = s + strlen(s) - 1; p1 < p2; p1++, p2--)
    {
        if(*p1 != *p2)
            return 0;
    }

    return 1;
}

int main()
{

    char s[50];

    gets(s);

    int n = f(s);
    if (n == 1)
        printf("E");
    else
        printf("Ne e");
    puts(s);
    return 0;
}
