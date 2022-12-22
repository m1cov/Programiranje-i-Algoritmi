#include <stdio.h>
#include <string.h>
#include <ctype.h>

int f(char *s)
{
    int i = 0, j = 0;
    while (s[i] != '\0')
    {
        if (!isdigit(s[i]))
        {

            if (islower(s[i]))
                s[j] = toupper(s[i]);
            else if (isupper(s[i]))
                s[j] = tolower(s[i]);
            else
                s[j] = s[i];

            j++;
        }
        else
        {
        }

        i++;
    }
    s[j] = '\0';
    return j;
}

int main()
{

    char s[50];

    gets(s);

    int len = f(s);

    printf("%s", s);
    return 0;
}