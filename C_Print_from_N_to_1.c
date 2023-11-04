#include <stdio.h>
void fun(int i)
{

    if (i == 1)
    {
        return;
    }

    printf("%d ", i);
    fun(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    printf("%d", 1);

    return 0;
}
