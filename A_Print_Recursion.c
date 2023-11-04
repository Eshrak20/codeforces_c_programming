#include <stdio.h>
void fun(int i , int y)
{

    if (i == y)
    {
        return;
    }
    printf("I love Recursion\n");
    fun(i + 1,y);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(0,n);
    return 0;
}
