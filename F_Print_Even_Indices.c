#include <stdio.h>
void fun(int *arr, int n, int i)
{

    if (i == n)
    {
        return;
    }
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }

    fun(arr, n, i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    fun(arr, -1, n-1);

    return 0;
}
