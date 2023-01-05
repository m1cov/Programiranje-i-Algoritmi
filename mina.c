#include <stdio.h>
#include <string.h>
int main()
{

    int a = 5, b = 6, c = 0, *pok;

    pok = &c;
    a++;

    c = a + b;

    printf("%d", *pok);
}