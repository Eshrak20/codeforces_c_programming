#include <stdio.h>
void function(int x)
{

    for (int i = 1; i < x; i++)
    {
        printf("%d ", i);
    }
    printf("%d", x);
}
int main()
{
    int n;
    scanf("%d", &n);
    function(n);
    return 0;
}
