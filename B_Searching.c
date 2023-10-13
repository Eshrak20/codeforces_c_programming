#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int keep = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            keep = i;
            break;
        }
        if (x != arr[i])
        {
            keep = -1;
            continue;
        }
    }
    printf("%d", keep);

    return 0;
}