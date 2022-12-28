#include <stdio.h>

void sort(int *poeni, int *index, int n, int nacin)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if ((nacin == 2 && poeni[i] > poeni[j]) || (nacin == 1 && index[i] > index[j]))
            {

                temp = poeni[i];
                poeni[i] = poeni[j];
                poeni[j] = temp;

                temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
}

int main()
{
    int n = 7;
    int indeks[100] = {11, 2, 7, 5, 4, 35, 101};
    int poeni[100] = {30, 70, 21, 20, 10, 5, 90};

    sort(poeni, indeks, n, 2);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", indeks[i], poeni[i]);

    return 0;
}