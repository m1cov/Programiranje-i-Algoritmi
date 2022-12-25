#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char s[argc];

    for (int i = 1; i < argc; i++)
        strcat(s, argv[i]);

    printf("%s", s);

    return 0;
}