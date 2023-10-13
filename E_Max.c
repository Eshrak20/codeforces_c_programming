#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int a, max = 0;
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d", max);

    return 0;
}
