#include <stdio.h>

int main()
{

    int n;
    while (scanf("%d", &n))
    {
        int temp = n;
        int proizvod = 1;
        while (temp)
        {
            proizvod *= (temp % 10);
            temp /= 10;
        }

        int prevrten = 0;
        while (proizvod)
        {
            prevrten = prevrten * 10 + (proizvod % 10);
            proizvod /= 10;
        }

        printf("%d\n", prevrten);
    }

    return 0;
}