#include <stdio.h>
int main()
{
    int n, m;
    float srv;

    printf("Vnesi broj na studenti i predmeti\n");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        srv = 0;
        printf("Vnesi oceni:\n");
        for (int j = 0; j < m; j++)
        {
            int temp;
            scanf("%d", &temp);
            srv += temp;
        }
        printf("Sreden prosek na studentot %d e %.2f\n",
               i + 1, (float)srv / m);
    }

    scanf("%d", &n);
    return (0);
}