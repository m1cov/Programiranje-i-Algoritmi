#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Vnesi strani na triagolnikot:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Triagolnikot e validen");
    else
        printf("Triagolnikot ne e validen");
}