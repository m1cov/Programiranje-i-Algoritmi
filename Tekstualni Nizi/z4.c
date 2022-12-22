#include <stdio.h>
#include <string.h>
#include <ctype.h>

void f(char *s, int a, int b)
{

    char *str = str + a - 1;
    char *d = str + a - 1 + b;

    while (*d != '\0')
    {

        *str = *d;
        d++;
        str++;
    }

    *str = '\0';
}

int main()
{

    char s[50];
    int a, b;

    gets(s);
    scanf("%d %d", &a, &b);

    f(s, a, b);

    puts(s);
    return 0;
}
