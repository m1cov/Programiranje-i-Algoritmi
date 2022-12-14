/*Потребно е да се напише програма за работа со матрици. Програмата треба да дозволи внесување
на димензиите на една квадратна матрица А, со целобројни елементи, со максимални димензии
(100х100). Елементите на матрицата и димензиите на матрицата се читаат од тастатура. Од
почетната матрица да се креира нова матрица В, со исти димензии како и почетната матрица.
Матрицата В треба да се креира од матрицата А, така што ќе се ископираат елементите од главната
и споредната дијагонала, и сите останати елементи освен елементите кои се десно од главната
дијагонала а лево од споредната дијагонала. Елементите кои се десно од главната а лево од
споредната дијагонала ќе се пополнат со вредност 0. На крај да се отпечати ново-формираната
матрица В.
*/

#include <stdio.h>
#define max 100

int main()
{

    int n;
    int a[max][max], b[max][max];

    printf("Vnesi golemina na matricite\n");
    scanf("%d", &n);

    if (n >= max)
        return -1;

    printf("Vnesi gi elementite na matricata\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!((j > i) && (j + i < n - 1)))
                b[i][j] = a[i][j];
        }
    }

    printf("\nKonecnata matrica e :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}