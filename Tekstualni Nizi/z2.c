#include <stdio.h>
#include <string.h>
#include <ctype.h>

int f(char *s, char ch)
{

    int br = 0;

    while (*s != '\0')
    {
        br += (*s == ch);
        s++;
    }

    return br;
}

int main()
{

    char s[50];
    char ch;

    gets(s);
    ch = getchar();

    printf("%d", f(s, ch));

    return 0;
}