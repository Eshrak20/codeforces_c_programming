#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int minimum = INT_MAX;
    int min, mx;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
            min = i;
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            mx = i;
        }
    }
    // printf("%d %d", minimum, max);
    int temp = array[mx];
    array[mx] = array[min];
    array[min] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
