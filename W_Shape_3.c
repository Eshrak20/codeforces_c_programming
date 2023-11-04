#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dbl = (n * 2) - 1;
    int x = dbl - 1;
    int y = 1;
    int flag = 0;

    for (int i = 0; i < dbl; i++)
    {

        for (int j = x; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < y; j++)
        {
            printf("*");
        }
        if (i == n - 1)
        {
            flag = 1;
            x--;
            y = y + 2;
        }

        printf("\n");
    }
    if (flag == 0)
    {
        x++;
        y = y - 2;
    }

    return 0;
}
