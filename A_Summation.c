#include <stdlib.h>
#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    long long int positive = llabs(sum);
    printf("%lld", positive);

    return 0;
}