#include <stdio.h>

void f(int *x)
{

    *x = *x * *x; 
    printf("Vrednosta na x vo funkcijata e %d\n", *x);
}

int main()
{

    int x = 4;

    printf("Vrednosta na x e %d\n", x);
    f(&x); 
    printf("Vrednosta na x po funkcijata e %d", x);

    return 0;
}