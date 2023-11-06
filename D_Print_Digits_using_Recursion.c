#include <stdio.h>
void fun(long long int x)
{
    if (x == 0)
        return;
    long long int num = x % 10;
    fun(x / 10);
    printf("%lld ", num);
}
long long int main()
{
    long long int n;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        long long int x;
        scanf("%lld", &x);
        fun(x);
        if (x == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
