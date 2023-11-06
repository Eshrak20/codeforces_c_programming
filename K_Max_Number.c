#include <stdio.h>
#include<limits.h>
int fun(int * num, int sz, int i)
{
    if (i == sz)
    {
        return INT_MIN ;
    }
    int a = fun(num,sz, i + 1);
    if (num[i] > a)
    {
        return num[i];
    }
    else
    {
        return a;
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = fun(arr, x, 0);
    printf("%d", res);

    return 0;
}
