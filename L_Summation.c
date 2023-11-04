#include <stdio.h>
long long int sum = 0;

void fun(long long int *arr, long long int n, long long int i)
{

    if (i == n)
    {
        return;
    }
    sum = sum + arr[i];
    fun(arr, n, i + 1);
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    fun(arr, n, 0);
    printf("%lld ", sum);

    return 0;
}
