#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int mn = INT_MAX;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < mn)
        {
            mn = A[i];
            pos = i + 1;
        }
    }
    printf("%d %d\n", mn, pos);

    return 0;
}