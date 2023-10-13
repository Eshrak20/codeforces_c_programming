#include <stdio.h>
int main()
{
    int a;
    int b;
    int res;
    scanf("%d%d", &a, &b);
    res = a - b;
    if (res >= 0)
    {
        printf("%d", res);
    }
    else
    {
        printf("%d", 0);
    }
    return 0;
}