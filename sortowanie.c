#include <stdio.h>

int main(void)
{

    int tab[10] = {32, 1, 7, 9, 3, 67, 90, 54, 4, 4};
    int min, max;
    min = tab[0];
    max = tab[0];

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", tab[i]);
    }
    for (int i = 1; i < 10; i++)
    {
        if (max < tab[i])
        {
            max = tab[i];
        }
        if (min > tab[i])
        {
            min = tab[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 9; j >= 1; j--)
        {
            if (tab[j] < tab[j - 1])
            {
                int bufor;
                bufor = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = bufor;
            }
        }
    }
    printf("Posortowane:\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", tab[i]);
    }
    printf("max = %d \n", max);
    printf("min = %d \n", min);
    return 0;
}