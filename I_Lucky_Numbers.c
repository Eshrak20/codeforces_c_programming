#include <stdio.h>
int main()
{
    int input;
    int num_1, num_2;

    scanf("%d", &input);
    num_1 = input / 10;
    num_2 = input % 10;

    if (num_2 % num_1 == 0 || num_1 % num_2 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}