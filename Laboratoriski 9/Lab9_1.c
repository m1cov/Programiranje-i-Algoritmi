#include <stdio.h>
#include <string.h>
#include <ctype.h>

void f(char *s1, char *s2)
{

    while (*s1 != '\0' || *s2 != '\0')
    {

        if ((isalpha(*s1) && isalpha(*s2)) || (isdigit(*s1) && isdigit(*s2)))
        {

            if (*s1 <= *s2)
                printf("%c", *s1);
            else
                printf("%c", *s2);
        }
        else
            printf(" ");

        s1++;
        s2++;
    }
}

int main()
{

    char s1[100], s2[100];

    gets(s1);
    gets(s2);

    f(s1, s2);

    return 0;
}