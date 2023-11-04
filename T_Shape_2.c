#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = n-1;
    int y = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = x; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < y; j++)
        {
            printf("*");
        }
        x--;
        y = y + 2;

        printf("\n");
    }

    return 0;
}
