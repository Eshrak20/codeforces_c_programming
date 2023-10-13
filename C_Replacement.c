#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            printf("%d ", 2);
        }
        else if (array[i] > 0)
        {
            printf("%d ", 1);
        }
        else
            printf("%d ", 0);
    }

    return 0;
}