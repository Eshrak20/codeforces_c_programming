#include<stdio.h>
long long int  fun(long long int num){
    if (num == 0)
    {
        return 1;
    }
    long long int sum = fun(num - 1);
    return num * sum;
}
int main()
{
    long long int x;
    scanf("%lld", &x);
    long long int res = fun(x);
    printf("%lld", res);

    return 0;
}
