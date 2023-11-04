#include <stdio.h>

void function(int a, int b)
{
    int sum = a + b;
    printf("%d", sum);
}
int main()
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    function(x, y);
    return 0;
}
