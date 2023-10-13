#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int a;
    int even = 0, odd = 0, negative = 0, positive = 0;
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;

            if (a > 0)
            {
                positive++;
            }
            else if (a < 0)
            {
                negative++;
            }
        }
        else if (a % 2 != 0)
        {
            odd++;
            if (a > 0)
            {
                positive++;
            }
            else if (a < 0)
            {
                negative++;
            }
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
}
