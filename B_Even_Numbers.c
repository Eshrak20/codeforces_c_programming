#include <stdio.h>
int main()
{
    int input, i;

    scanf("%d", &input);

    if (input == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (i = 1; i <= input; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
