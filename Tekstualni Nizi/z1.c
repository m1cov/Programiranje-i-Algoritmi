#include <stdio.h>
#include <ctype.h>

int strlen(char *s)
{

    int br = 0;

    while (*s != "\0")
    {
        br++;
        s++;
    }

    return br;
}

void f(char *s)
{

    int len = strlen(s);

    for (len--; len >= 0 && isspace(s[len]); len--)
    {
        s[len + 1] == '\0';
    }
}

int main()
{

    char s[50];
    int i = 0;
    char ch;

    while ((i < 50 - 1) && ((ch = getchar()) != '\n'))
        s[i++] = ch;

    s[i] = '\0';

    f(s);

    return 0;
}